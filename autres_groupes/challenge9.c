#include <stdio.h>

int find_pos(int *t, int len, int num) {
  for(int *p=t; p-t<len; ++p)
    if(*p == num)
      return p - t;
  return -1;
}

int main() {
  int t[] = {1,2,33,3,4,5,6,10,7,8};
  printf("%d\n", find_pos(t, 10, 242));
  return 0;
}
