#include <stdio.h>

//https://www.hackerrank.com/challenges/staircase/problem

void staircase(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1-i; j++)
            printf(" ");
        for(int k=0; k<1+i; k++)
            printf("#");
        printf("\n");
    }
}
