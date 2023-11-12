#include <sys/utsname.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/param.h>
#include <unistd.h>

int main() {
  struct utsname uts;
  if (uname(&uts) == -1) {
    perror("uname ");
    exit(1);
  }
  printf("OSname \t: %s\n", uts.sysname);
  printf("Nodename \t: %s\n", uts.nodename);
  printf("Release \t: %s\n", uts.release);
  printf("Version \t: %s\n", uts.version);
  printf("Machine \t: %s\n", uts.machine);
  printf("Nodename \t: %s\n", uts.nodename);
  printf("Release \t: %s\n", uts.release);
  printf("Version \t: %s\n", uts.version);
  printf("Machine \t: %s\n", uts.machine);

  char hn[MAXHOSTNAMELEN]="";
  gethostname(hn, MAXHOSTNAMELEN);
  printf("Hostname: \t: %s\n", hn);

  return 0;
}
