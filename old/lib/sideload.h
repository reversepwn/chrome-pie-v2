#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "colors.h"

void error(int type);

void sideload(char appfolder[]) {
  printf("%s", appfolder);
}

void run() {
    int r = rand() % 12;
    printf("Starting the sideload proccess, estimated time " RED "%d" CRESET "s\n", r);
    int r2 = rand() % r;
    sleep(r2);
}