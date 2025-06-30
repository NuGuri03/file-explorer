# src/CMakeLists.txt

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    "*.cpp"
    "*.c"
    "*.hpp"
    "*.h"
)

add_executable(FileExplorer ${SOURCES})
