#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "bypass.h"
#include "colors.h"
#include "chromeos.h"


void runPie() {
    int* r = rand() % 12;
    printf("Starting the sideload proccess, estimated time " RED "%s" CRESET "s\n", *r);
    int* r2 = rand() % r;
    sleep(r2);
    char* deviceStatus = "Not found";
    if (deviceStatus == "Connected") {
        printf(WHT "[" GRN "SUCESS" WHT "] " GRN "Work in progress\n");
    } else {
        printf(WHT "[" RED "ERROR" WHT "] " RED "Exited with code " GRN "1\n");
        printf(WHT "[" CYN "REASON" WHT "]" GRN "Device Status: %s", deviceStatus);
    }
}


void runPiePico() {
    int r = rand() % 12;
    printf("Starting the sideload proccess, estimated time " RED "%s" CRESET "s\n", r);
    int r2 = rand() % r;
    sleep(r2);
    char* deviceStatus = "Not found";
    if (deviceStatus == "Connected") {
        printf(WHT "[" GRN "SUCESS" WHT "] " GRN "Work in progress\n");
    } else {
        printf(WHT "[" RED "ERROR" WHT "] " RED "Exited with code " GRN "1\n");
    }
}
