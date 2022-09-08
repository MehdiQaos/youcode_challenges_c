/*
programme qui demande la distance en Metre et la transforme en Mile
La formule : Mile = Km*1.609
Mile = metre / 1000 * 1.609
*/

#include<stdio.h>

int main() {
    double miles;
    double metres;
    printf("Entrer la distance en metres: ");
    scanf("%lf", &metres);
    miles = metres / 1000 * 1.609;
    printf("distance in miles: %.2lf\n", miles);
    return 0;
}