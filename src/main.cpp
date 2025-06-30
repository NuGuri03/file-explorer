#include <iostream>
#include <string>

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

    cout << "start File Explorer\n";
    // TODO: 파일 탐색 기능 시작
    return 0;
}
