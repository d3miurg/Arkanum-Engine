cmake_minimum_required(VERSION 3.11)

project(ArkanumEngine C)

option(EXPERIMENT "experiment" OFF)

set(SOURCE src/)
set(INCLUDE include/)
set(INNER_LIBRARIES lib/)

if(NOT EXPERIMENT)
    set(ENTRY ${SOURCE}main)
else()
    set(ENTRY ${SOURCE}experiment)
endif()

set(CMAKE_EXE_LINKER_FLAGS "-Xlinker /NODEFAULTLIB:libcmt")

add_executable(${PROJECT_NAME} ${ENTRY})

include_directories(${INCLUDE})

target_link_libraries(${PROJECT_NAME} ${INNER_LIBRARIES}raylib opengl32 gdi32 winmm)