#include<stdio.h>
#include<math.h>

int main() {
    float rayon, circonference;
    printf("Entrer le rayon du cercle: ");
    scanf("%f", &rayon);

    circonference = 2.0f * M_PI * rayon;
    printf("la circonference de votre cercle est: %.2f\n", circonference);
    return 0;
}