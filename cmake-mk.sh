mkdir obj
mkdir obj/mk
cd obj/mk
cmake -G "Unix Makefiles" ../../src
make all
cd ../..
