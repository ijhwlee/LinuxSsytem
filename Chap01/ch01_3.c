#include <stdio.h>

extern int addnum(int a, int b);

int main() {
  int sum;
  sum = addnum(3,7);
  printf("Sum 3~7 = %d\n", sum);
  return 0;
}
