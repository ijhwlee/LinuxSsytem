#include <unistd.h>
#include <stdio.h>

int main() {
  printf("PID : %d\n", (int)getpid());
  printf("PPID : %d\n", (int)getppid());

  printf("======================================\n");
  printf("PID : %d\n", (int)getpid());
  printf("PGRP : %d\n", (int)getpgrp());
  printf("PGID(0) : %d\n", (int)getpgid(0));
  printf("PGID(402) : %d\n", (int)getpgid(402));

  printf("======================================\n");
  printf("SID : %d\n", (int)getsid(0));

  return 0;
}

