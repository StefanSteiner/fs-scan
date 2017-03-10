cmake_minimum_required(VERSION 3.0)

project(fs-scan)

set(CMAKE_CXX_STANDARD 11)

include_directories(external/Catch/include)

#if(WIN32)
#  set(PLATFORMSRC Exec_win.cpp Exec_win.h)
#else()
#  set(PLATFORMSRC Exec_posix.cpp Exec_posix.h)
#endif()

#add_executable(testfsscan Args.cpp Args.h Exec.cpp Exec.h ExecuteCommandResult.cpp ExecuteCommandResult.h main.cpp ${PLATFORMSRC})
add_executable(testfsscan main.cpp)
target_compile_definitions(testfsscan PRIVATE _CRT_SECURE_NO_WARNINGS=1)

#add_executable(test-app test.cpp)
#target_compile_definitions(test-app PRIVATE _CRT_SECURE_NO_WARNINGS=1)
