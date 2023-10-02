#include <unistd.h>
#include <stdio.h>
#include <math.h>

int main() {
  printf("Link Max \t: %ld\n", pathconf(".", _PC_LINK_MAX));
  printf("Name Max \t: %ld\n", pathconf(".", _PC_NAME_MAX));
  printf("Path Max \t: %ld\n", pathconf(".", _PC_PATH_MAX));
  printf("Sin(0.5) \t: %f\n", sin(0.5));
  return 0;
}

