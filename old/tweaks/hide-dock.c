#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

#include "../lib/chromeos.h"
#include "../lib/tweak-handler.h"
#include "../lib/colors.h"



int load();
int tweak();
int hideDock();

int main()
{
    load();
}

int load()
{
    // This will run when the program launches
    printf("[" GRN "Success" reset "]" CYN " Loaded the tweak!\r\n" reset);
    tweak();
    return 0;
}

int tweak()
{
    hideDock();
    return 0;
}

int hideDock() {
    printf("[" GRN "======>" reset "] Hiding dock\n");
    sleep(2);
    printf("[" RED "ERROR" reset "] " YEL "  Could not change file " CYN "unknown\n");
    changeFile();
}
