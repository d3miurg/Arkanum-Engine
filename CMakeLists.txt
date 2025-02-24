cmake_minimum_required(VERSION 3.19)

project(ArkanumEngine C)

option(EXPERIMENT "set experiment.c as entry point" OFF)
option(DEBUG "generate debug informaion" OFF)

set(SOURCE src/)
set(INCLUDE include/)
set(INNER_LIBRARIES lib/)

set(ENTRY ${SOURCE}main.c)
if(EXPERIMENT)
    set(ENTRY ${SOURCE}experiment.c)
endif()

add_executable(${PROJECT_NAME} ${ENTRY})

add_definitions(-D_CRT_SECURE_NO_WARNINGS)
add_compile_options(-g)
set(CMAKE_EXE_LINKER_FLAGS "-Xlinker /NODEFAULTLIB:libcmt")
include_directories(${INCLUDE})
target_link_libraries(${PROJECT_NAME} ${INNER_LIBRARIES}raylib opengl32 gdi32 winmm)