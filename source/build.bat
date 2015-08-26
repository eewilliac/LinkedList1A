@echo off
rmdir /s/q ..\build
mkdir ..\build
pushd ..\build
cl /EHsc /Zi /Fe:ll1a.exe ..\source\MainProg.cpp ..\source\LinkedList.cpp
popd