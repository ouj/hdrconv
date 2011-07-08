mkdir obj
mkdir obj/mk
cd obj/mk
cmake -G "Unix Makefiles" -D CMAKE_C_COMPILER=clang -D CMAKE_CXX_COMPILER=clang++ ../../src
make all
cd ../..
