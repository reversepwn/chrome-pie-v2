#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

#include "colors.h"

char infoJson[] = "https://raw.githubusercontent.com/KevinAlavik/chrome-pie/main/info.json";
float version = 0.1;
bool updateAvailable = false;

void update()
{
    char command[] = "sudo chmod +xrw ./update.sh && sudo ./update.sh %f", version;
    system(command);
}

void fetchInfo()
{

}

void checkUpdate(int type)
{
    fetchInfo();
    if (updateAvailable)
    {
        printf("There is a new update available, " GRN "%f\r\n", version);
    }
    else
    {
        if (type == 1)
        {
            printf("You are up to date with the latest version of chromepie\r\n");
        }
        else
        {
            return;
        }
    }
}