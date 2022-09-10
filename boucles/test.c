#include <stdio.h>

int main () {
  char ch1[1000], ch2[1000];
  gets(ch1);
  gets(ch2);
  printf("'%s'\n", ch1);
  printf("'%s'\n", ch2);
  return 0;
}
