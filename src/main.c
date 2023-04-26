#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf(GRN "========> " CYN "Cloning fakeos and preparing for build. Please make sure your USB is connected." YEL "\n");
    int cloneCommand = system("sudo git clone https://github.com/reversepwn/fake-os /chrome-pie/temp/fakeos/");
    if(cloneCommand == 0) {
        printf(GRN "Successfully cloned fakeos\n");
        printf(YEL "Will now continue to build fakeos, dont plug out your USB\n" CRESET);
    } else {
        printf(RED "Could not clone fakeos, exited with error\n");
        return 1;
    }
    return 0;
}