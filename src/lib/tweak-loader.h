#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

/*void loadTweak(char path[])
{
    char startTweakCommand[100];
    char command[100]; // declare the command variable here
    char outCommand[100];
    sprintf(startTweakCommand, "gcc %s ", path);
    printf("Running: %s", startTweakCommand);
    system(startTweakCommand);
    char newName[100];
    sprintf(outCommand, "sudo mkdir ~/usr/local/bin/pie-tweaks/out/");
    system(outCommand);
    sprintf(newName, "~/usr/local/bin/pie-tweaks/out/%s", path);
    sprintf(command, "sudo mv a.out ~%s && sudo chmod +x ~%s && ~%s", newName, newName, newName);
    system(command);
}*/

void loadTweak(char path[], char name[]) {
  char compileCommand[100];
  char mkDirCommand[100];
  char mvCommand[100];
  char runCommand[100];

  sprintf(mkDirCommand, "mkdir /usr/local/bin/pie-tweaks/");
  sprintf(compileCommand, "cc %s -o %s", path, name);
  sprintf(mvCommand, "mv ./%s /usr/local/bin/pie-tweaks/%s", name, name);
  sprintf(runCommand, "/usr/local/bin/pie-tweaks/%s", name);

  system(mkDirCommand);
  system("clear");
  system(compileCommand);
  system(mvCommand);
  system(runCommand);
}
