#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void do_something(int parent)
{
  int i;
  for(i=0; i<1000; i++)
    if(parent == 0)
      printf("From child i = %d\n", i);
    else
      printf("From parent i = %d\n", i);
  return;
}

int main() {
    pid_t pid;

    switch (pid = fork()) {
        case -1 : /* fork failed */
            perror("fork");
            exit(1);
            break;
        case 0 : /* child process */
            printf ("Child Process - My PID:%d, My Parent's PID:%d\n",
                      (int)getpid(), (int)getppid());
	    do_something(pid);
            break;
        default : /* parent process */
            printf("Parent process - My PID:%d, My Parent's PID:%d, My Child's PID:%d\n", (int)getpid(), (int)getppid(), (int)pid);
	    do_something(pid);
            break;
    }

    if (pid == 0)
    	printf("End of fork from child process\n");
    else
    	printf("End of fork from parent process\n");
    return 0;
}

