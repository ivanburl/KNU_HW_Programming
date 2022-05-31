cmake_minimum_required (VERSION 3.20)
 
project(demo)
 
set(SOURCE_FILES "main.cpp")
 
add_executable (demo ${SOURCE_FILES})
 
# Connecting the library, specify where to get the header files
include_directories("../Lib")
# And also we specify dependence on static library
target_link_libraries(demo UzVarLib)