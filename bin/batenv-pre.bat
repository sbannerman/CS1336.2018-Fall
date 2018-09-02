rem Capture current directory so that we can change back at the end of the script
set CURRENT_DIR=%CD%

rem http://weblogs.asp.net/whaggard/archive/2005/01/28/get-directory-path-of-an-executing-batch-file.aspx
cd /D %~dp0
cd ../../CppTool
set BASE_DIR=%CD%

rem Define directory variables
set BIN_DIR=%BASE_DIR%\bin
set LIB_DIR=%BASE_DIR%\lib
set SRC_DIR=%BASE_DIR%\src

rem Allow for delegation to libraries
set GCC_HOME=%LIB_DIR%\gcc
set GIT_HOME=%LIB_DIR%\git
set VSC_HOME=%LIB_DIR%\vsc

set PATH=%LIB_DIR%\ruby\bin;%GIT_HOME%\cmd;%VSC_HOME%
set RUBYLIB=%SRC_DIR%\ruby
set RUBYOPT=
