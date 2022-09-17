#include <stdio.h>

//https://www.hackerrank.com/challenges/mini-max-sum

int birthdayCakeCandles(int candles_count, int* candles) {
    int max = candles[0];
    int count = 1;
    for(int i=1; i<candles_count; i++) {
        if(candles[i] == max)
            count++;
        else if(candles[i] > max) {
            max = candles[i];
            count = 1;
        }
    }
    return count;
}
