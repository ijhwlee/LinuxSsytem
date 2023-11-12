#include <sys/types.h>
#include <sys/times.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
  int i;
  time_t t;
  struct tms buf;
  clock_t ct, t1, t2;

  ct = sysconf(_SC_CLK_TCK);
  printf("Clock tick : %ld\n", ct);

  if ((t1 = times(&buf)) == -1) {
    perror("times 1");
    exit(1);
  }

  for (i = 0; i < 99999999; i++) {
    time(&t);
    tan(0.86);
    sin(0.6);
    cos(0.5);
  }
  sleep(1);

  if ((t2 = times(&buf)) == -1) {
    perror("times 2");
    exit(1);
  }

  printf("t1: %ld\n", t1);
  printf("t2: %ld\n", t2);
  printf("utime : %ld\n", buf.tms_utime);
  printf("stime : %ld\n", buf.tms_stime);
  printf("Real time : %.2f sec\n", (double)(t2 - t1) / ct);
  printf("User time : %.2f sec\n", (double)buf.tms_utime / ct);
  printf("System time : %.2f sec\n", (double)buf.tms_stime / ct);

  return 0;
}
