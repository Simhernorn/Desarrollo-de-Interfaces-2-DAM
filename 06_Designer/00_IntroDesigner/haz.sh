#!/bin/bash

make clean 2>/dev/null || true
echo "Make clean hecho"
rm -f *.pro *.pro.user Makefile* ui_*.h moc_*.cpp object_script.* .qmake.stash
echo "Primer rm hecho"
ls -la
rm -rf debug release .qtc_clangd .qtcreator
echo "Segundo rm hecho"
ls -la

qmake -project
echo "qmake -project hecho"
fichero=$(ls *.pro)
echo "QT += widgets" >> "$fichero"

qmake
echo "qmake hecho"
make
echo "make hecho"
