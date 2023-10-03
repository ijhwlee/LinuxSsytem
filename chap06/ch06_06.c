#include <unistd.h>
#include <stdio.h>

//extern char **environ;

int main(int argc, char **argv, char **envp) {
  char **env;

  //env = environ;
  for(int n = 0; n < argc; n++) {
    printf("Argv[%d] = %s\n", n, argv[n]);
  }
  printf("=================================================\n");
  env = envp;
  while (*env) {
    printf("%s\n", *env);
    env++;
  }

  return 0;
}

