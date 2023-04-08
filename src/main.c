#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib/colors.h"
#include "lib/tweak-loader.h"
#include "lib/tweak-handler.h"
#include "lib/bypass.h"
#include "lib/sideload.h"
#include "lib/chromeos.h"
#include "lib/update-handler.h"

void error(int type);
void help();

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        error(1);
    }

    if (argc == 2)
    {
        if (strcmp(argv[1], "--help") == 0)
        {
            help();
        } else if(strcmp(argv[1], "-h") == 0) {
            help();
        } else if(strcmp(argv[1], "update") == 0) {
            update();
        } else {
            error(2);
        }
    }
}

void error(int type)
{
    if (type == 1)
    {
        printf(RED "Expected a parameter or a command, " reset GRN "see --help or -h for all the avalible commands and parameters\r\n");
    }
    if (type == 2)
    {
        printf(RED "Did not find command or parameter, " reset GRN "see --help or -h for all the avalible commands and parameters\r\n");
    }
}

void help()
{
    printf(UYEL "Chrome Pie" reset "\n -help, -h - Displays this message\n run - runs pie\n tweak - create tweak command(s)\n update - updates pie\r\n");
}
