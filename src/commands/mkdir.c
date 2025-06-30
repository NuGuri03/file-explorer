#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

#include "commands/mkdir.h"

void mkdir(const char* path) {
    if (path == NULL) {
        fprintf(stderr, "mkdir: missing argument\n");
        return;
    }

    int ret = syscall(SYS_mkdir, path, 0755);
    if (ret != 0) {
        perror("mkdir syscall");
        return;
    }
}