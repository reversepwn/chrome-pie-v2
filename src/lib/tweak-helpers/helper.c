#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

#include "files.h"
#include "helper.h"

void register() {
    printf("Registering tweak as %s", name);
    printf(" using version %s", version);
    printf(" and author %s\r\n", author);
}