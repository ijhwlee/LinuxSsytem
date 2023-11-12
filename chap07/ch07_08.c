#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int status;
    pid_t pid;

    switch (pid = fork()) {
        case -1 : /* fork failed */
            perror("fork");
            exit(1);
            break;
        case 0 : /* child process */
            printf("--> Child Process\n");
	    sleep(2);
            exit(2);
            break;
        default : /* parent process */
            printf("--> Parent process waiting\n");
            while (wait(&status) != pid)
                continue;
            printf("--> Parent process\n");
            printf("Status: %d, %x\n", status, status);
            printf("Child process Exit Status:%d\n", status >> 8);
            break;
    }
    return 0;
}

