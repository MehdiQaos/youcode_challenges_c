#include<stdio.h>

void copy(char *, char *);

int main() {
    char ch1[] = "Mehdi Qaos";
    char ch2[100];
    copy(ch1, ch2);
    printf(ch2);
    return 0;
}

void copy(char *source, char *target) {
    char *p = source, *q = target;
    while(*q++ = *p++);
}