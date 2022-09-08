/*
programme qui demande la température en Fahrenheit et la transforme en degré Celsius et affiche
la sensation ressentie (très froid, froid, chaud, très chaud)
La formule : C = (F-32)/1.8
*/

#include<stdio.h>

int main() {
    double Fahrenheit_temp;
    double celsius_temp;
    printf("Entrer la temperature en Fahrenheit: ");
    scanf("%lf", &Fahrenheit_temp);
    celsius_temp = (Fahrenheit_temp - 32) / 1.8;
    if(celsius_temp < 0)                                             // tres froid si temperature < 0
        printf("%.2lf C\ntemperature tres froide\n", celsius_temp);   
    else if(celsius_temp >= 0 && celsius_temp < 20)                  // froid si 0 <= temperature < 20
        printf("%.2lf C\ntemperature froide\n", celsius_temp);
    else if(celsius_temp > 35 && celsius_temp < 42)                  // chaud si 35 < temperature < 42
        printf("%.2lf C\ntemperature chaude\n", celsius_temp);
    else if(celsius_temp >= 42)                                                            // tres chaud si temperature > 42
        printf("%.2lf C\ntemperature tres chaude\n", celsius_temp);
    else
        printf("%.2lf C\ntemperature cool\n", celsius_temp);

    return 0;
}