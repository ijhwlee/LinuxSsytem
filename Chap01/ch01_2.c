#include <stdio.h>

extern int errno;

int main() {
  FILE *fp;
  if((fp=fopen("text.txt", "r")) == NULL) {
    printf("error = %d\n", errno)l
    exit(1);
  }
  fclose(fp);
  return 0;
}
