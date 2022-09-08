/*
programme qui demande la distance en Mile et la transforme en Metre
La formule : Km = Mile/1.609
Metre = Mile * 1.609 * 1000
*/

#include<stdio.h>

int main() {
    double miles;
    double metres;
    printf("Entrer la distance en miles: ");
    scanf("%lf", &miles);
    metres = miles * 1.609 * 1000;
    printf("distance in metres: %.2lf m\n", metres);
    return 0;
}