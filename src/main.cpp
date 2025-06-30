#include <iostream>
#include <string>

#include "commands/ls.h"
#include "commands/cd.h"
#include "commands/mkdir.h"
#include "commands/rm.h"

using namespace std;

void print_help() {}

int main(int argc, char* argv[]) {

    for (int i = 1; i < argc; i++) {
        string arg = argv[i];
        if (arg == "--help") {
            cout << "File Explorer, developing version.\n";
            // TODO: 도움말 만들기
            print_help();

            return 0;
        }

        if (arg == "--gui") {
            cout << "GUI mode will release later.\n";
            return 0;
        }
    }

    return 0;
}
