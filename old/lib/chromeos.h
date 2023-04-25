#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void check() {
    printf("Work in progress");
}

void alert(char message[]) {
    printf("ALERT: %s\r\n", message);
}

void input(char message[]) {
    printf("INPUT: %s\r\n", message);
}
