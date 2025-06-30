#include <stdio.h>
#include <unistd.h>

#include "commands/rm.h"

void rm(const char* path) {
    if (path == NULL) {
        fprintf(stderr, "rm: missing argument\n");
        return;
    }

    int ret = unlink(path);
    if (ret != 0) {
        perror("rm");
    }
}