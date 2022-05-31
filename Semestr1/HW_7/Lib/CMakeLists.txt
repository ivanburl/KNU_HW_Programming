cmake_minimum_required (VERSION 3.20)
 
project(UzVarLib)
 
set(SOURCE_FILES "UzVar.cpp")
set(HEADER_FILES "UzVar.h")
 
# We declare the project as a static library and add all the source code files to it.
add_library(UzVarLib STATIC ${HEADER_FILES} ${SOURCE_FILES})