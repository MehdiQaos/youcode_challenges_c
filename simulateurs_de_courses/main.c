#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h> // #include <windows.h> ? for sleep function

#define STRING_LENGTH 100
#define SLEEP_TIME 3 // 3000 for windows?

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


// print function section
void printIntro() {
    char s[] = "Bienvenue à notre événement principal, les fans de course "
            "numérique !J'espère que tout le monde a pris son goûter car "
            "nous allons commencer !";
    printf("\n%s\n\n", s);
}

void printCountDown() {
    printf("Coureurs prets ! Dans...\n");
    for(int i=5; i>0; --i) {
        printf("%d\n", i);
        sleep(1);
    }
    printf("Course !\n\n");
}

void printFirstPlaceAfterLap(Race *race) {
    printf("Après le tour numéro %d La première place est occupée par : %s "
            "dans la voiture de course %s !\n", race->currentLap,
            race->firstPlaceDriverName, race->firstPlaceRaceCarColor);
}

void printCongratulation(Race *race) {
    printf("\nFélicitons tous %s, dans la voiture de course %s, pour son incroyable "
            "performance.\nC'était vraiment une belle course et bonne nuit "
            "à tous !\n\n", race->firstPlaceDriverName, race->firstPlaceRaceCarColor);
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

void updateFirstPlace(Race *race, RaceCar *raceCar1, RaceCar *raceCar2) {
    if(raceCar1->totalLapTime < raceCar2->totalLapTime) {
        strcpy(race->firstPlaceDriverName, raceCar1->driverName);
        strcpy(race->firstPlaceRaceCarColor, raceCar1->raceCarColor);
    }else {
        strcpy(race->firstPlaceDriverName, raceCar2->driverName);
        strcpy(race->firstPlaceRaceCarColor, raceCar2->raceCarColor);
    }
    race->currentLap++;
}

void startRace(RaceCar *raceCar1, RaceCar *raceCar2) {
    Race race;
    race.numberOfLaps = 5;
    race.currentLap = 0;
    strcpy(race.firstPlaceDriverName, "");
    strcpy(race.firstPlaceRaceCarColor, "");

    while(race.currentLap < race.numberOfLaps) {
        sleep(SLEEP_TIME); // pour un peu d'ambiance
        updateRaceCar(raceCar1);
        updateRaceCar(raceCar2);
        updateFirstPlace(&race, raceCar1, raceCar2);
        printFirstPlaceAfterLap(&race);
    }
    printCongratulation(&race);
}


int main() {
    time_t t;
    srand((unsigned) time(&t));
    char driver1[STRING_LENGTH] = "Mehdi", driver2[STRING_LENGTH] = "Youssef";
    char couleur1[STRING_LENGTH] = "rouge", couleur2[STRING_LENGTH] = "jaune";

    // saisie des noms des pilotes et les couleurs de ses voitures
    printf("Entrer le nom du premier pilote: ");
    scanf("%[^\n]%*c", driver1);
    printf("Entrer sa couleur de voiture: ");
    scanf("%[^\n]%*c", couleur1);
    printf("Entrer le nom du deuxieme pilote: ");
    scanf("%[^\n]%*c", driver2);
    printf("Entrer sa couleur de voiture: ");
    scanf("%[^\n]%*c", couleur2);

    // initialisation
    RaceCar raceCar1 = {.totalLapTime=0};
    strcpy(raceCar1.driverName, driver1);
    strcpy(raceCar1.raceCarColor, couleur1);
    RaceCar raceCar2 = {.totalLapTime=0};;
    strcpy(raceCar2.driverName, driver2);
    strcpy(raceCar2.raceCarColor, couleur2);

    // start de la course
    printIntro();
    printCountDown();
    startRace(&raceCar1, &raceCar2);

    return 0;
}
