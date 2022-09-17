#include <stdio.h>
#include <stdlib.h>

//https://www.hackerrank.com/challenges/compare-the-triplets

int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    int *r = calloc(2, sizeof (int));
    r[0] = r[1] = 0;
    for(int i=0; i<a_count; i++) {
        if(a[i] > b[i])
            r[0]++;
        else if(a[i] < b[i])
            r[1]++;
    }
    *result_count = 2;
    return r;
}
