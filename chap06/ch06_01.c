#include <sys/sysinfo.h>
#include <stdio.h>

int main() {
  struct sysinfo info;

  sysinfo(&info);

  printf("Uptime \t\t: %ld\n", info.uptime);
  printf("Loads \t\t: %ld, %ld, %ld\n", info.loads[0], info.loads[1], info.loads[2]);
  printf("Total Ram\t\t: %ld\n", info.totalram);
  printf("Free Ram\t\t: %ld\n", info.freeram);
  printf("Number of Processes\t: %d\n", info.procs);

  return 0;
}

