@echo off
@setlocal

cd /D %~dp0
call batenv-pre.bat

cd /D %~dp0
ruby.exe seed-cpp-prj.rb
if NOT "%errorlevel%" == "0" EXIT /B 1

cd /D %~dp0
call batenv-post.bat
