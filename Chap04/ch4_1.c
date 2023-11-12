#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
  int fd;
  mode_t mode;
  mode = 0644;
  fd = open("comsi.txt", O_CREAT, mode);
  if(fd == -1)
  {
    perror("Create");
    exit(-1);
  }
  close(fd);
  return 0;
}
