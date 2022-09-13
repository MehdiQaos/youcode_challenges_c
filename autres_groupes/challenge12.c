#include<stdio.h>

void inserer(int *t, int len, int number, int pos) {
  int i;
  for(i = len; i > pos; i--) {
    t[i] = t[i-1];
  }
  t[pos] = number;
}

int main() {
  int t[20] = {1,2,3,4,5,6,7};
  inserer(t, 7, 100, 3);
  for(int *p=t; p-t<8; ++p)
    printf("%d\n", *p);

  return 0;
}
