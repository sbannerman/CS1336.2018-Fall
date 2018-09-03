@echo off
@setlocal

cd /D %~dp0
call batenv-pre.bat

cd /D %~dp0/..
%VSC_HOME%\Code.exe %BASE_WORK_DIR%
if NOT "%errorlevel%" == "0" EXIT /B 1

cd /D %~dp0
call batenv-post.bat
