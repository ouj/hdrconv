mkdir obj
mkdir obj\msvc
cd obj\msvc
cmake ..\..\src -G "Visual Studio 10 Win64"
cd ..\..\src
pause