#include <stdio.h>
#include <stdlib.h>
  
#define COLOR_BOLD  "\e[1m"
#define COLOR_RED   "\033[31m"
#define COLOR_OFF   "\e[m"

int main() {
    printf(COLOR_RED "Canary Branch\n" COLOR_OFF COLOR_BOLD "-----------\n" COLOR_OFF "Expect bugs\n\npie-canary run - Install for pico\n");
    return 0;
}