#include<stdio.h>

int main() {
    int nombre = 234;
    printf("le nombre de 3 chifres: %d\n", nombre);
    printf("%d", nombre % 10);
    nombre /= 10;
    printf("%d", nombre % 10);
    nombre /= 10;
    printf("%d\n", nombre % 10);
    return 0;
}