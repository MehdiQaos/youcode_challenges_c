#include <stdio.h>

int main() {
  char c;
  printf("Entrer un character: ");
  scanf("%c", &c);

  switch (c) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'Y':
      printf("'%c' est une voyelle\n", c);
      break;
    default:
      printf("'%c' n'est pas une voyelle\n", c);
      break;
  }
  return 0;
}
