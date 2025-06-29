mkdir build && cd build

cmake ..
make -j$(nproc)

echo "Build complete. Run './build/FileExplorer' in project root to start."