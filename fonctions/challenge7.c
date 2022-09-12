#include<stdio.h>

//declaration
int add(int a, int b);

int main() {
    int resultat;
    resultat = add(10, 3);
    printf("%d\n", resultat);
    return 0;
}

//definition
int add(int a, int b) {
    return a + b;
}