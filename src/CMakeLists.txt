file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    "*.cpp"
    "*.h"
)

add_executable(FileExplorer ${SOURCES})

target_include_directories(FileExplorer
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
)

