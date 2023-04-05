#include <stdio.h>
#include <stdlib.h>
  
int main(int argc, char* argv[]) {
    if (argv[1] = "--help") {
      printf("Chrome Pie\n--help - Displays this message\n\n");
    } 
    if (argv[1] = "run") {
      if(argv[2] = "--help") {
        printf("Run commands\n--help - Displays this message\n--stable - Installs the stable version of pie\n--canary - Innstalls the canary version of pie\n");
        return 1;
      } if (argv[2] = "--stable ") {
        printf("Set deafult install/run option to **stable**");
      } else {
        printf("Chrome Pie\n--------------\nWork in progress\n---------------\n");
      }
      return 0;
    } else {
      printf("Did not find command check --help for a list of the commands");
      return 0;
    }
    return 0;
}