#include <stdio.h>

void carre(int n) {
  printf("%d\n", n * n);
}

void affiche_carre(int *t, int len) {
  for(int *p=t; p-t<len; ++p)
    carre(*p);
}

int main() {
  int t[] = {1,2,3,4,5,6,7,8};
  affiche_carre(t, 8);
  return 0;
}
