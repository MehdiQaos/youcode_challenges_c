#include <stdio.h>

//https://www.hackerrank.com/challenges/mini-max-sum

void miniMaxSum(int arr_count, int* arr) {
    long sum = arr[0];
    int min, max;
    min = max = arr[0];
    for(int i=1; i<arr_count; i++) {
        sum += arr[i];
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    printf("%ld %ld\n", sum - max, sum - min);
}
