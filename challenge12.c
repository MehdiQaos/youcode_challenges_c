#include<stdio.h>

int main() {
    int nombre = 800;

    // solution sans creer un nouveau variable
    printf("le nombre de 3 chifres: %d\n", nombre);
    printf("%d", nombre % 10);
    nombre /= 10;
    printf("%d", nombre % 10);
    nombre /= 10;
    printf("%d\n", nombre % 10);

    /* autre solution
    int inverse = 0;
    int temp = nombre;
    inverse += temp % 10;
    temp /= 10;
    inverse *= 10;
    inverse += temp % 10;
    temp /= 10;
    inverse *= 10;
    inverse += temp % 10;

    printf("le nombre de 3 chifres: %d\n", nombre);
    printf("l'inverse : %d\n", inverse);
    */

    return 0;
}