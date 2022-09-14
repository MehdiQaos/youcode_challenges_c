#include<stdio.h>

void print_triangle(int lignes) {
    int n = 2 * lignes - 1; // nombre des etoiles dans la base du triangle
    for(int i=0; i<lignes; ++i) {
        for(int j=0; j<n/2-i; ++j)
            printf(" ");
        for(int k=0; k<1+2*i; ++k)
            printf("*");
        printf("\n");
    }
}

int main() {
    int n;
    while(scanf("%d", &n)) {
        print_triangle(n);
    }
    return 0;
}