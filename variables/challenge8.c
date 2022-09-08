#include<stdio.h>

int main() {
    int a, b, c;
    long somme;
    float moyenne;

    printf("Entrer 3 nombres (separe par des espaces): ");
    scanf("%d %d %d", &a, &b, &c);

    somme = a + b + c;
    moyenne = (float)somme / 3;

    printf("La somme des nombres est: %ld\n", somme);
    printf("La moyenne des nombre est: %.2f\n", moyenne);
    return 0;
}