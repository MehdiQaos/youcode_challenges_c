#include<stdio.h>

int main() {
    char nom[32];
    char prenom[32];
    int age;
    char sexe[10];
    char ntel[20];

    printf("entrer ton nom: ");
    scanf("%s", nom);
    printf("entrer ton prenom: ");
    scanf("%s", prenom);
    printf("entrer ton age: ");
    scanf("%d", &age);
    printf("entrer ton sexe: ");
    scanf("%s", sexe);
    printf("entrer ton numero de telephone: ");
    scanf("%s", &ntel);

    printf("bonjour, %s %s, ton age est %d\nton sexe est: %s\nnumero de telephone: %s\n", prenom, nom, age, sexe, ntel);
    return 0;
}