#include<stdio.h>

int main() {
    long a, b;
    long resultat_long;
    double resultat_double;
    printf("Entrer un nombre entier (a): ");
    scanf("%d", &a);
    printf("Entrer un nombre entier (b): ");
    scanf("%d", &b);
    resultat_long = a + b;
    printf("%ld + %ld = %ld\n", a, b, resultat_long);
    resultat_long = a - b;
    printf("%ld - %ld = %ld\n", a, b, resultat_long);
    resultat_long = a * b;
    printf("%ld * %ld = %ld\n", a, b, resultat_long);
    if(b != 0) {    // cas b different de zero
        resultat_double = (double)a / b;
        printf("%ld / %ld = %.2lf\n", a, b, resultat_double);
        resultat_long = a % b;
        printf("%ld %% %ld = %ld\n", a, b, resultat_long);  // "%%" to escape the '%' character
    }else {         // cas b egale a zero
        printf("%ld / %ld = infini\n", a, b);
        printf("%ld %% %ld = non defini\n", a, b);
    }
    
    return 0;
}