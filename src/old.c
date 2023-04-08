#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/colors.h"
#include "lib/tweak-loader.h"
#include "lib/tweak-handler.h"
#include "lib/bypass.h"
#include "lib/sideload.h"
#include "lib/chromeos.h"

int main(int argc, char **argv)
{
  if (argc < 2)
  {
    printf(RED "Expected a command, " reset "see " BWHT "--help or -h " reset "for a list of commands\n");
    return 1;
  }

  char *instr = argv[1];

  if (strcmp(instr, "--help") == 0)
  {
    printf(RED "Chrome Pie\n" reset "--help, -h - Displays this message\nrun - runs pie\ntweak - create tweak command(s)\n");
    return 1;
  }
  else if (strcmp(instr, "-h") == 0)
  {
    printf(RED "Chrome Pie\n" reset "--help, -h - Displays this message\nrun - runs pie\ntweak - create tweak command(s)\n");
    return 1;
  }
  else if (strcmp(instr, "tweak") == 0)
  {
    printf(RED "Chrome Pie\n" reset "create - Creates an template file for developing tweaks\n");
    if (strcmp(argv[2], "create") == 0)
    {
      if (strcmp(argv[3], "-n") == 0)
      {
        if (strcmp(argv[4], "") == 1)
        {
          tweakTemplate(argv[4]);
        }
        else
        {
          printf(RED "Expected an name, " reset "do \"tweak name\" after (replace tweak name with your tweaks name)\n");
        }
      }
      else if (strcmp(argv[3], "-h") == 0)
      {
        printf(RED "Chrome Pie Tweak Builder\n" reset "-n - Set the name of the tweak\n");
      }
      else if (strcmp(argv[3], "--help") == 0)
      {
        printf(RED "Chrome Pie Tweak Builder\n" reset "-n - Set the name of the tweak\n");
      }
      printf(RED "Expected an argument, " reset "see " BWHT "--help or -h " reset "for a list of commands\n");
    }
  }
  else if (strcmp(instr, "pico") == 0)
  {
    runPiePico();
  }
  else if (strcmp(instr, "run") == 0)
  {
    if (argc == 2)
    {
      runPie();
    }
    else if (argc == 3)
    {
      if (strcmp(argv[2], "--stable") == 0)
      {
        printf("Set default install/run option to " BWHT "stable\n");
      }
      else if (strcmp(argv[2], "--canary") == 0)
      {
        printf("Set default install/run option to " BWHT "canary\n");
      }
      else if (strcmp(argv[2], "--help") == 0)
      {
        printf("Run commands\n--help - Displays this message\n--stable - Installs the stable version of pie\n--canary - Installs the canary version of pie\n");
      }
      else
      {
        printf(RED "Did not find argument: " reset BWHT GRN "%s, " reset "see" BWHT " --help or -h " reset "for a list of arguments\n", argv[2]);
      }
    }
    else if (argc == 4 && strcmp(argv[2], "--help") == 0)
    {
      printf("Run commands\n--help, -h - Displays this message\n--stable - Installs the stable version of pie\n--canary - Installs the canary version of pie\n");
    }
    else if (argc == 4 && strcmp(argv[2], "-h") == 0)
    {
      printf("Run commands\n--help, -h - Displays this message\n--stable - Installs the stable version of pie\n--canary - Installs the canary version of pie\n");
    }
    else
    {
      printf(RED "Invalid number of arguments, " reset "see " BWHT "--help or -h " reset "for a list of arguments\n");
    }
  }
  else
  {
    printf(RED "Invalid command: " reset BWHT GRN "%c, " reset "see " BWHT "--help or -h" reset "for a list of commands\n", *instr);
  }

  return 0;
}
