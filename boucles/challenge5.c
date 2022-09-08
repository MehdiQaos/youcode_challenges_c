#include <stdio.h>

int main () {
  for(int i=1; i<101; ++i) {
    if(i % 3 == 0) {
      printf("Fizz");
      if(i % 5 == 0)
        printf("Buzz");
    }else if(i % 5 == 0)
      printf("Buzz");
    else
      printf("%d", i);
    printf("\n");
  }
  return 0;
}
