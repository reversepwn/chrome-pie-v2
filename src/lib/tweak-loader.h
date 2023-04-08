#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

void loadTweak(char name[])
{
    char findFileCommand[100];
    char startTweakCommand[100];
    sprintf(findFileCommand, "find . | grep -i '%s.c'", name);
    char file[1000];
    FILE *fp = popen(findFileCommand, "r");
    if (fp == NULL)
    {
        printf("Failed to run command\n");
        exit(1);
    }
    fgets(file, sizeof(file), fp);
    pclose(fp);
    printf("Found tweak: %s · Starting the tweak now!\n", file);
    char newName[100];
    sprintf(newName, "./src/tweaks/out/%s", name);
    sprintf(startTweakCommand, "sudo gcc %s  -o %s && %s", file, newName, newName);
    system(startTweakCommand);
}
