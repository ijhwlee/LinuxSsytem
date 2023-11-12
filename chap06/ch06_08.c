#include <stdlib.h>
#include <stdio.h>

int main() {
  char *val, *val_save;

  val = getenv("SHELL");
  if (val == NULL)
    printf("SHELL not defined\n");
  else
    printf("SHELL = %s\n", val);

  printf("=================================================\n");
  val_save = val = getenv("TERM");
  if (val == NULL)
    printf("TERM not defined\n");
  else
    printf("1. TERM = %s\n", val);

  putenv("TERM=vt100");

  val = getenv("TERM");
  printf("2. TERM = %s\n", val);

  setenv("TERM",val_save, 1);
  printf("=================================================\n");
  val = getenv("TERM");
  if (val == NULL)
    printf("TERM not defined\n");
  else
    printf("1. TERM = %s\n", val);

  setenv("TERM","vt100", 0);
  val = getenv("TERM");
  printf("2. TERM = %s\n", val);

  setenv("TERM","vt100", 1);
  val = getenv("TERM");
  printf("3. TERM = %s\n", val);

  printf("=================================================\n");
  val = getenv("TERM1");
  if (val == NULL)
    printf("TERM1 not defined\n");
  else
    printf("1. TERM1 = %s\n", val);

  setenv("TERM1","vt100", 0);
  val = getenv("TERM1");
  printf("2. TERM1 = %s\n", val);

  unsetenv("TERM1");

  val = getenv("TERM1");
  if (val == NULL)
    printf("TERM1 not defined\n");
  else
    printf("3. TERM1 = %s\n", val);

  setenv("TERM1","vt100", 1);
  val = getenv("TERM1");
  printf("4. TERM1 = %s\n", val);

  return 0;
}

