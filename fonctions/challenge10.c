#include<stdio.h>

typedef enum { false, true } bool;

float devidedBy(int a, int b);
bool isPrime(int n);

int main() {
    int a = 16, b = 17;     //17 premier, 16 non
    printf("%f\n", devidedBy(233, 5));
    printf("%d est un nombre premier: %s\n", a, isPrime(a) == true ? "vrai" : "faux");
    printf("%d est un nombre premier: %s\n", b, isPrime(b) == true ? "vrai" : "faux");
    return 0;
}

float devidedBy(int a, int b) {
    return (float)a / b;
}

bool isPrime(int n) {
    float d, r;
    for(int i=2; i<n/2; ++i)
        if(devidedBy(n, i) == n / i) //on test si les resultat de devideBy est nombre entier ou decimal, 
        //si decimal sa implique que i ne devise pas n
            return false;

    return true;
}