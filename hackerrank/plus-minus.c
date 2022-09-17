#include <stdio.h>

//https://www.hackerrank.com/challenges/plus-minus/problem

void plusMinus(int arr_count, int* arr) {
    float p = 0, n = 0, z = 0;
    
    for(int i=0; i<arr_count; i++)
        if(arr[i] > 0)
            ++p;
        else if(arr[i] < 0)
            ++n;
        else
            ++z;
            
    p /= arr_count;
    n /= arr_count;
    z /= arr_count;

    printf("%.6f\n%.6f\n%.6f", p, n, z);
}
