/*
Programme qui Convert du celsius (°C) au fahrenheit (°F)
La formule : F = (C*1.8)+32
C = (F - 32) / 1.8
*/

#include<stdio.h>

int main() {
    float Fahrenheit_temp;
    float celsius_temp;
    printf("Entrer la temperature en Fahrenheit: ");
    scanf("%f", &Fahrenheit_temp);
    celsius_temp = (Fahrenheit_temp - 32) / 1.8;
    printf("temperature en celsius: %.2f C\n", celsius_temp); // %.2f pour afficher juste 2 chiffres apres la virgule
    return 0;
}