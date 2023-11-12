#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#include <stdio.h>

int main() {
  struct passwd *pw;

  pw = getpwuid(getuid());
  printf("UID : %d\n", (int)pw->pw_uid);
  printf("Login Name : %s\n", pw->pw_name);

  for(int n = 0; n < 3; n++) {
    pw = getpwent();
    printf("UID: %d, LoginName: %s\n", (int)pw->pw_uid, pw->pw_name);
  }
  endpwent();

  int number = 0;
  while((pw=getpwent()) != NULL) {
    printf("UID: %d, LoginName: %s\n", (int)pw->pw_uid, pw->pw_name);
    number++;
  }
  endpwent();
  printf("Total number of user is %d\n", number);

  return 0;
}

