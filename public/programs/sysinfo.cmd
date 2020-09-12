set outfile=system_info.log

REM Print system info

ECHO SYSTEM INFO > %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1
systeminfo >> %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1

REM Print processor info
ECHO PROC   INFO >> %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1
SET Processor >> %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1

REM Print compiler and linker info
ECHO COMPILER INFO >> %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1
ECHO gcc --version >> %outfile% 2>&1
gcc --version >> %outfile% 2>&1

ECHO gcc -v >> %outfile% 2>&1
gcc -v >> %outfile% 2>&1

ECHO g++ --version >> %outfile% 2>&1
g++ --version >> %outfile% 2>&1
ECHO g++ -v >> %outfile% 2>&1
g++ -v >> %outfile% 2>&1

ECHO c++ --version >> %outfile% 2>&1
c++ --version >> %outfile% 2>&1
ECHO c++ -v >> %outfile% 2>&1
c++ -v >> %outfile% 2>&1

ECHO ld --version >> %outfile% 2>&1
ld --version >> %outfile% 2>&1
ECHO ld -v >> %outfile% 2>&1
ld -v >> %outfile% 2>&1

ECHO make --version >> %outfile% 2>&1
make --version >> %outfile% 2>&1

REM Write a hello world and try to compile
set cppfile=_tempFile_tjw_.cpp
set exefile=_tempFile_tjw_.exe

ECHO. >> %outfile% 2>&1

ECHO CREATE TEMPORARY CPP FILE: %cppfile%
ECHO int main(){ int tempVar = 0; return 0; } > %cppfile%
ECHO WROTE CPP FILE %cppfile% >> %outfile% 2>&1
ECHO FILE CONTENTS: >> %outfile% 2>&1
type %cppfile% >> %outfile% 2>&1

ECHO TRY TO COMPILE WITH G++ >> %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1
ECHO g++ -v %cppfile% -o %exefile% >> %outfile% 2>&1
g++ -v %cppfile% -o %exefile% >> %outfile% 2>&1
ECHO RETURN CODE: %errorlevel% >> %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1


ECHO TRY TO COMPILE WITH GCC >> %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1
ECHO gcc -v %cppfile% -o %exefile% >> %outfile% 2>&1
gcc -v %cppfile% -o %exefile% >> %outfile% 2>&1
ECHO RETURN CODE: %errorlevel% >> %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1

ECHO TRY TO COMPILE WITH C++ >> %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1
ECHO c++ -v %cppfile% -o %exefile% >> %outfile% 2>&1
c++ -v %cppfile% -o %exefile% >> %outfile% 2>&1
ECHO RETURN CODE: %errorlevel% >> %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1

ECHO. >> %outfile% 2>&1
ECHO CREATE (ANOTHER) TEMPORARY CPP FILE: %cppfile%
ECHO #include ^<iostream^> > %cppfile%
ECHO int main(){std::cout ^<^< "Hello World" ^<^< std::endl; return 0;} >> %cppfile%
ECHO WROTE CPP FILE %cppfile% >> %outfile% 2>&1
ECHO FILE CONTENTS: >> %outfile% 2>&1
type %cppfile% >> %outfile% 2>&1

ECHO TRY TO COMPILE WITH G++ >> %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1
ECHO g++ -v %cppfile% -o %exefile% >> %outfile% 2>&1
g++ -v %cppfile% -o %exefile% >> %outfile% 2>&1
ECHO RETURN CODE: %errorlevel% >> %outfile% 2>&1
ECHO EXECUTE %exefile% >> %outfile% 2>&1
%exefile% >> %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1


ECHO TRY TO COMPILE WITH GCC >> %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1
ECHO gcc -v %cppfile% -o %exefile% >> %outfile% 2>&1
gcc -v %cppfile% -o %exefile% >> %outfile% 2>&1
ECHO RETURN CODE: %errorlevel% >> %outfile% 2>&1
ECHO EXECUTE %exefile% >> %outfile% 2>&1
%exefile% >> %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1

ECHO TRY TO COMPILE WITH C++ >> %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1
ECHO c++ -v %cppfile% -o %exefile% >> %outfile% 2>&1
c++ -v %cppfile% -o %exefile% >> %outfile% 2>&1
ECHO RETURN CODE: %errorlevel% >> %outfile% 2>&1
ECHO EXECUTE %exefile% >> %outfile% 2>&1
%exefile% >> %outfile% 2>&1
ECHO ========== >> %outfile% 2>&1

del %exefile%
del %cppfile%

ECHO.
ECHO FILE %outfile% has been created