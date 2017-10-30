REM Automated build cpp files with visual c++ tools (look task.json -> name:'build')
@echo off
REM Compiling..... <name>.cpp -> <name>.obj
call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" x64
set compilerflags=/EHsc /c
set objectsCPP= *.cpp
cl.exe %compilerflags% %objectsCPP%
REM Linking..... *.obj -> klondike.exe
call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" x64
if not exist "bin" mkdir bin
set linkerflags=/link /out:bin/klondike.exe
set objectsOBJ= *.obj
cl.exe  %objectsOBJ% %linkerflags%
REM Removing *.obj .....
call del *.obj
pause
exit