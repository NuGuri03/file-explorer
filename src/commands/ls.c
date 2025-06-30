#include <stdio.h>
#include <dirent.h>
#include <string.h>

#include "commands/ls.h"

void ls() {
    DIR *dir;
    
    dir = opendir(".");
    if (dir == NULL) {
        perror("opendir");
        return;
    }

    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        // ignore current and parent directory
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }
        
        printf("%s ", entry->d_name);
    }
    printf("\n");

    closedir(dir);
}