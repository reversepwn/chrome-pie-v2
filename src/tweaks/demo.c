/*

DEMO TWEAK, DOEST DO ANYTHING EXEPT PROMPT AN ALERT IN CHROME OS
---- This tweak doesnt use the tweak handler ----

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

#include "../lib/chromeos.h"
#include "../lib/tweak-loader.h"

int load();
int tweak();

int main()
{
    load();
}

int load()
{
    // This will run when the program launches
    printf("Loaded the demo tweak!\r\n");
    tweak();
    return 0;
}

int tweak()
{
    // This is the main tweak function, will only load if the load() function was ran successfully
    alert("Hello, World!");
    return 0;
}
