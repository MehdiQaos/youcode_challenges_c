#include <stdio.h>

int main () {
  int n;
  printf("Entrer un nombre entier: ");
  scanf("%d", &n);

  if(n % 2 == 0)
    printf("%d est un nombre paire\n", n);
  else
    printf("%d est un nombre impaire\n", n);
  return 0;
}
