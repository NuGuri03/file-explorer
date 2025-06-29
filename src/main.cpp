#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {

    for (int i = 1; i < argc; i++) {
        string arg = argv[i];
        if (arg == "--help") {
            cout << "File Explorer CLI 도움말\n";
            // TODO: 도움말 만들기
            return 0;
        }

        if (arg == "--gui") {
            cout << "GUI 모드는 추후 지원 예정입니다.\n";
            return 0;
        }
    }

    cout << "File Explorer 시작\n";
    // TODO: 파일 탐색 기능 시작
    return 0;
}
