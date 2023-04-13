#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

void loadTweak(char name[])
{
    char findFileCommand[100];
    char startTweakCommand[100];
    char command[100]; // declare the command variable here

    sprintf(findFileCommand, "sudo find ~/ | grep -i '%s.c'", name);
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
    sprintf(startTweakCommand, "sudo clang %s ", file);
    printf("Running: %s", startTweakCommand);
    system(startTweakCommand);
    char newName[100];
    sprintf(newName, "/usr/local/bin/pie-tweaks/out/%s", name);
    sprintf(command, "mv a.out %s && sudo chmod +x %s && %s", newName, newName, newName);
    system(command);
}
