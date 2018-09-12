rem Capture current directory so that we can change back at the end of the script
set CURRENT_DIR=%CD%

cd /D %~dp0
cd ..\..\CppTool
set CPP_TOOL_DIR=%CD%

cd /D %~dp0
cd ..
set BASE_WORK_DIR=%CD%

rem Define directory variables
set BIN_DIR=%CPP_TOOL_DIR%\bin
set LIB_DIR=%CPP_TOOL_DIR%\lib
set SRC_DIR=%CPP_TOOL_DIR%\src
set WORK_ETC_DIR=%BASE_WORK_DIR%\etc

rem Allow for delegation to libraries
set GCC_HOME=%LIB_DIR%\gcc
set GIT_HOME=%LIB_DIR%\git
set VSC_HOME=%LIB_DIR%\vsc

rem Set/reset environment variables for tools and ruby
set PATH=%LIB_DIR%\ruby\bin;%GCC_HOME%\mingw32\bin;%GIT_HOME%\cmd;%VSC_HOME%
set RUBYLIB=%SRC_DIR%\ruby;%WORK_ETC_DIR%\ruby
set RUBYOPT=

