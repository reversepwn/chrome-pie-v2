/*

DEMO TWEAK, DOEST DO ANYTHING EXEPT PROMPT AN ALERT IN CHROME
---- This tweak doesnt use the tweak handler ----

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

#include "../lib/chromeos.h"
#include "../lib/tweak-loader.h"
#include "../lib/colors.h"

int load();
int tweak();

int main()
{
    load();
}

int load()
{
    // This will run when the program launches
    printf("[" GRN "Success" reset "]" CYN " Loaded the tweak!\r\n");
    tweak();
    return 0;
}

int tweak()
{
    // This is the main tweak function, will only load if the load() function was ran successfully
    alert(GRN "Hello, World!");
    return 0;
}
