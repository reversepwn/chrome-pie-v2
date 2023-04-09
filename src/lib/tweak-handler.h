#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

void tweakCommandHandler(int argc, char *argv[])
{
    int x = argc;
    int i;

    for (i = 0; i < x; i++)
    {
        printf("%s\n", argv[i]);
    }
}

void createTweakFile(char *argv[]) {
    printf("Work in progress!\n");
}