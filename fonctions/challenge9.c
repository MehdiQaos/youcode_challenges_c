#include<stdio.h>

typedef enum { false, true } bool;

//declaration
bool isPremier(int n);

//test de la fonction
int main() {
    int a = 15, b = 23;
    bool resultat = isPremier(a);
    printf("%d est un nombre premier: %s\n", a, resultat == true ? "vrai" : "faux");
    resultat = isPremier(b);
    printf("%d est un nombre premier: %s\n", b, resultat == true ? "vrai" : "faux");
    return 0;
}

//definition
bool isPremier(int n) {
    for(int i=2; i<n/2; ++i) {
        if(n % i == 0)
            return false;
    }
    return true;
}