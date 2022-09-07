/*
programme qui demande la température en Fahrenheit et la transforme en degré Celsius
La formule : C = (F-32)/1.8
*/

#include<stdio.h>

int main() {
    double Fahrenheit_temp;
    double celsius_temp;
    printf("Entrer la temperature en Fahrenheit: ");
    scanf("%lf", &Fahrenheit_temp);
    celsius_temp = (Fahrenheit_temp - 32) / 1.8;
    printf("temperature en celcius: %.2lf C\n", celsius_temp);

    return 0;
}