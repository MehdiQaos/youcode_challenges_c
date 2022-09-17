#include <stdio.h>
#include <stdlib.h>

//https://www.hackerrank.com/challenges/time-conversion

char* timeConversion(char* s) {
    char *r = calloc(9, sizeof (char)); // malloc(9 * sizeof (char))
    int n;
    for(int i=0; i<9; i++) // copy all digits and ':'
        r[i] = s[i];
    r[8] = '\0';
    
    if(s[8] == 'P' && (s[0] != '1' || s[1] != '2')) {
        n = atoi(s);
        r[0] = '0' + (n + 12) / 10;
        r[1] = '0' + (n + 12) % 10;
    } else if(s[8] == 'A' && s[0] == '1' && s[1] == '2')
        r[0] = r[1] = '0';
    
    return r;
}

int main (int argc, char *argv[])
{
    char *s = "12:40:22AM";
    printf("%s\n", timeConversion(s));

    return 0;
}
