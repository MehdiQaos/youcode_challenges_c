#include<stdio.h>

typedef enum { false, true } bool;

//declaration
bool isPremier(int n);

//test de la fonction
int main() {
    int n;
    printf("Entrer un nombre entier: ");
    scanf("%d", &n);
    bool resultat = isPremier(n);
    printf("%d est un nombre premier: %s\n", n, resultat == true ? "vrai" : "faux");
    return 0;
}

//definition
bool isPremier(int n) {
    if(n <= 1)
        return false;

    for(int i=2; i<n/2; ++i) {
        if(n % i == 0)
            return false;
    }
    return true;
}