#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void check() {
    printf("Work in progress");
}

void alert(char message[]) {
    printf("Triggered an alert, message content: %s\r\n", message);
}