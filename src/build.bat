@echo off

@echo *********************************
@echo Building gsc test
@echo *********************************
C:\MinGW\bin\gcc gsc.c test.c -o gsc

@echo *********************************
@echo Running gsc test
@echo *********************************
gsc.exe

pause