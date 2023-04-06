#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/colors.h"

int main(int argc, char **argv) {
  if (argc < 2) {
    printf(RED "Expected a command, " reset "see " BWHT "--help or -h " reset "for a list of commands\n");
    return 1;
  }
  
  char* instr = argv[1]; 
  
  if (strcmp(instr, "--help" ) == 0) {
    printf(RED "Chrome Pie\n" reset "--help, -h - Displays this message\nrun - runs pie\n");
    return 1;
  } else if (strcmp(instr, "-h" ) == 0) { 
    printf(RED "Chrome Pie\n" reset "--help, -h - Displays this message\nrun - runs pie\n");
    return 1;
  } else if (strcmp(instr, "run") == 0) {
    if (argc == 2) {
      printf("Work in progress \n");
    } else if (argc == 3) {
      if (strcmp(argv[2], "--stable") == 0) {
        printf("Set default install/run option to " BWHT "stable\n");
      } else if (strcmp(argv[2], "--canary") == 0) {
        printf("Set default install/run option to " BWHT "canary\n");
      } else if (strcmp(argv[2], "--help") == 0) {
        printf("Run commands\n--help - Displays this message\n--stable - Installs the stable version of pie\n--canary - Installs the canary version of pie\n");
      } else {
        printf(RED "Did not find argument: " reset BWHT GRN "%s, " reset "see" BWHT " --help or -h " reset "for a list of arguments\n", argv[2]);
      }
    } else if (argc == 4 && strcmp(argv[2], "--help") == 0) {
      printf("Run commands\n--help, -h - Displays this message\n--stable - Installs the stable version of pie\n--canary - Installs the canary version of pie\n");
    } else if (argc == 4 && strcmp(argv[2], "-h") == 0) {
      printf("Run commands\n--help, -h - Displays this message\n--stable - Installs the stable version of pie\n--canary - Installs the canary version of pie\n");
    } else {
      printf(RED "Invalid number of arguments, " reset "see " BWHT "--help or -h " reset "for a list of arguments\n");
    }
  } else {
    printf(RED "Invalid command: " reset BWHT GRN "%s, " reset "see " BWHT "--help or -h" reset "for a list of commands\n", instr);
  }
  
  return 0;
}
