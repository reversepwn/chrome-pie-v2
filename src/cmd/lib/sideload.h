#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "bypass.h"
#include "colors.h"
#include "chromeos.h"


void runPie() {
    printf("Starting the sideload proccess, estimated time " RED "11.2" CRESET "s\n");
    sleep(5);
    char* deviceStatus = "Not found";
    if (deviceStatus == "Connected") {
        printf(WHT "[" GRN "SUCESS" WHT "] " GRN "Work in progress\n");
    } else {
        printf(WHT "[" RED "ERROR" WHT "] " RED "Exited with code " GRN "1\n");
    }
}