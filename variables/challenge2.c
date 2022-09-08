/*
Programme qui Convert du celsius (°C) au fahrenheit (°F)
La formule : F = (C*1.8)+32
*/

#include<stdio.h>

int main() {
    double Fahrenheit_temp;
    double celsius_temp;
    printf("Entrer la temperature en Celsius: ");
    scanf("%lf", &celsius_temp);
    Fahrenheit_temp = (celsius_temp * 1.8) + 32;
    printf("temperature en Fahrenheit: %.2lf F\n", Fahrenheit_temp); // %.2lf pour afficher juste 2 chiffres apres la virgule
    return 0;
}