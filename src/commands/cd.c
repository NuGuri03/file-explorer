#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "commands/cd.h"

void cd(const char* __path) {
    if (__path == NULL) {
        char *path = getenv("HOME");
        if (path == NULL) {
            fprintf(stderr, "cd: HOME not set\n");
            return;
        }
    }

    if (chdir(__path) != 0) {
        perror("cd");
        return;
    }
}