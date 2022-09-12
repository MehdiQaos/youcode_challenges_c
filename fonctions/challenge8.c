#include<stdio.h>

//declaration
void echanger(int a, int b);

int main() {
    int a = 10, b = 20;
    printf("avant l'echange:\na = %d, b = %d\n", a, b);
    echanger(a, b);
    printf("apres l'echange:\na = %d, b = %d\n", a, b);
    return 0;
}
//on constate que les 2 valeurs ne s'echange pas, solution: utiliser les pointeurs

//definition
void echanger(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}