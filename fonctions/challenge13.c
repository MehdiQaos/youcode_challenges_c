#include<stdio.h>

typedef struct {
    char nom[30];
    char matricule[20];
    int age;
    char notes[1000];
} etudiant;

int main() {
    etudiant student1;
    printf("Entrer ton nome: ");
    scanf("%[^\n]%*c", student1.nom);
    printf("Entrer ton numero de matricule: ");
    scanf("%[^\n]%*c", student1.matricule);
    printf("Entrer ton age: ");
    scanf("%d", &student1.age);
    printf("Entrer tes notes: ");
    scanf("\n%[^\n]%*c", student1.notes);

    printf("\nBonjour %s, ton numero de matricule est: %s, tu est age de %d\n"
        "et voila tes notes: \n%s", student1.nom, student1.matricule, student1.age, student1.notes);
    return 0;
}