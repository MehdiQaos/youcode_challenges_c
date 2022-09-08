#include<stdio.h>
#include<math.h>

int main() {
    float longueur, largeur, circonference;
    printf("Entrer le longueur du rectangle: ");
    scanf("%f", &longueur);
    printf("Entrer le largeur du rectangle: ");
    scanf("%f", &largeur);

    circonference = (longueur + largeur) * 2;
    printf("la circonference de votre rectangle est: %.2f\n", circonference);
    return 0;
}