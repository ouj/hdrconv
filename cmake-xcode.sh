mkdir obj
mkdir obj/xcode
cd obj/xcode
cmake -G "Xcode" ../../src
open *.xcodeproj
cd ../..
