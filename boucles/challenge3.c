#include <stdio.h>

int main () {
  int a, b, somme = 0;
  printf("Entrer le premier nombre entier: ");
  scanf("%d", &a);
  printf("Entrer le deuxieme nombre entier: ");
  scanf("%d", &b);

  somme = a + b;

  if(a == b)
    printf("%d\n", 3 * somme);
  else
    printf("%d\n", somme);
  return 0;
}
