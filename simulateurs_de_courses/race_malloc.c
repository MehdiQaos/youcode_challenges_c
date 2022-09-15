#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

#define STRING_LENGTH 100
#define SLEEP_LAP 0
#define SLEEP_COUNTDOWN 0
#define MAX_PILOTES 20

// structures section
typedef struct {
    int numberOfLaps;
    int currentLap;
    char firstPlaceDriverName[STRING_LENGTH];
    char firstPlaceRaceCarColor[STRING_LENGTH];
} Race;

typedef struct {
    char driverName[STRING_LENGTH];
    char raceCarColor[STRING_LENGTH];
    int totalLapTime;
} RaceCar;

typedef struct {
    RaceCar *cars;
    int numberOfDrivers;
} Cars;


// print function section
void printIntro() {
    printf("\nBienvenue a notre evenement principal, les fans de course "
            "numerique !J'espere que tout le monde a pris son gouter\n"
            "car nous allons commencer !\n\n");
}

void printCountDown() {
    printf("Coureurs prets ! Dans...\n");
    for(int i=5; i>0; --i) {
        printf("%d\n", i);
        sleep(SLEEP_COUNTDOWN);
    }
    printf("Course !\n\n");
}

void printFirstPlaceAfterLap(Race *race) {
    printf("Apres le tour numero %d La premiere place est occupee par : %s "
            "dans la voiture de course %s !\n", race->currentLap,
            race->firstPlaceDriverName, race->firstPlaceRaceCarColor);
}

void printCongratulation(Race *race) {
    printf("\nFelicitons tous %s, dans la voiture de course %s, pour son incroyable "
            "performance.\nC'etait vraiment une belle course et bonne nuit "
            "a tous !\n\n", race->firstPlaceDriverName, race->firstPlaceRaceCarColor);
}


// fonctions logiques
int calculateTimeToCompleteLap(void) { // srand called at main
    int vitesse = rand() % 3 + 1;   // random number between 1 and 3
    int acceleration = rand() % 3 + 1;
    int nerves = rand() % 3 + 1;
    return vitesse + acceleration + nerves;
}

void updateRaceCar(RaceCar *raceCar) {
    raceCar->totalLapTime += calculateTimeToCompleteLap();
} 

void updateFirstPlace(Race *race, Cars *cars) {
    RaceCar *first = &(cars->cars)[0];
    for(int i=1; i<cars->numberOfDrivers; i++)
        if(cars->cars[i].totalLapTime < first->totalLapTime) {
            first = &cars->cars[i];
        }
    strcpy(race->firstPlaceDriverName, first->driverName);
    strcpy(race->firstPlaceRaceCarColor, first->raceCarColor);
    race->currentLap++;
}

void startRace(Cars *cars, int numberOfLaps) {
    Race race;
    race.numberOfLaps = numberOfLaps;
    race.currentLap = 0;
    strcpy(race.firstPlaceDriverName, "");
    strcpy(race.firstPlaceRaceCarColor, "");

    while(race.currentLap < race.numberOfLaps) {
        sleep(SLEEP_LAP); // pour un peu d'ambiance
        for(int i=0; i<cars->numberOfDrivers; i++)
            updateRaceCar(&(cars->cars)[i]);

        updateFirstPlace(&race, cars);
        printFirstPlaceAfterLap(&race);
    }
    printCongratulation(&race);
}


int main() {
    time_t t;
    srand((unsigned) time(&t));

    int nombre_de_tours = 3;
    Cars cars;

    printf("Entrer le nombre de pilotes: ");
    scanf("%d", &cars.numberOfDrivers);
    printf("Entrer le nombre de tours: ");
    scanf("%d", &nombre_de_tours);

    cars.cars = calloc(cars.numberOfDrivers, sizeof (RaceCar));

    for(int i=0; i<cars.numberOfDrivers; i++) {
        printf("Entrer le nom du pilote numero %d: ", i+1);
        scanf("%s", cars.cars[i].driverName);
        printf("Entrer sa couleur de voiture: ");
        scanf("%s", cars.cars[i].raceCarColor);
        cars.cars[i].totalLapTime = 0;
    }

    // start de la course
    printIntro();
    printCountDown();
    startRace(&cars, nombre_de_tours);

    free(cars.cars);

    return 0;
}
