#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "bypass.h"
#include "colors.h"
#include "chromeos.h"


void runPie() {
    int r = rand() % 12;
    printf("Starting the sideload proccess, estimated time " RED "%d" CRESET "s\n", r);
    int r2 = rand() % r;
    sleep(r2);
    printf(WHT "[" GRN "SUCESS" WHT "] " GRN "Work in progress\n");
}


void runPiePico() {
    int r = rand() % 12;
    printf("Starting the sideload proccess, estimated time " RED "%d" CRESET "s\n", r);
    int r2 = rand() % r;
    sleep(r2);
    printf(WHT "[" GRN "SUCESS" WHT "] " GRN "Work in progress\n");
  }
