#include <stdio.h>

int recherche_binaire(int *t, int len, int num) {
  int min = 0, max = len-1, mid;
  while(min <= max) {
    mid = (max + min) / 2;
    if(t[mid] == num)
      return mid;
    else if(t[mid] < num)
      min = mid + 1;
    else
      max = mid - 1;
  }
  return -1;
}

int main() {
  int d;
  scanf("%d", &d);
  int t[] = {1,2,3,4,6,7,8,10,33};
  printf("%d\n", recherche_binaire(t, 9, d));
  return 0;
}
