mkdir build && cd build

cmake ..
make -j$(nproc)

echo "Build complete. Run './FileExplorer' in project root to start."