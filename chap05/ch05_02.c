#include <stdio.h>
#include <unistd.h>

int main() {
  printf("Arg Max \t: %ld\n", sysconf(_SC_ARG_MAX));
  printf("Clock Tick \t: %ld\n", sysconf(_SC_CLK_TCK));
  return 0;
}
