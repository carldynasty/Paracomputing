#include <stdio.h>
#include <limits.h>
#include <unistd.h>

int main (){

  int gethostname(char *name, size_t len);
  int sethostname(const char *name, size_t len);
  char *getlogin(void);
  int getlogin_r(char *name, size_t namesize);
  char hostname[HOST_NAME_MAX];
  char username[LOGIN_NAME_MAX];
  gethostname(hostname,HOST_NAME_MAX);
  getlogin_r(username, LOGIN_NAME_MAX);

  printf("%s\n",gethostname);
  printf("%s\n",getlogin_r);

    return 0;
}
