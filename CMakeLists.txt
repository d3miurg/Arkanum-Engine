cmake_minimum_required(VERSION 3.19)

project(ArkanumEngine C)

option(EXPERIMENT "experiment" OFF)

set(SOURCE src/)
set(INCLUDE include/)
set(INNER_LIBRARIES lib/)

set(ENTRY ${SOURCE}main.c)
if(EXPERIMENT)
    set(ENTRY ${SOURCE}experiment.c)
endif()

add_executable(${PROJECT_NAME} ${ENTRY})

# set_property(TARGET ${PROJECT_NAME} PROPERTY C_STANDARD 99)
add_definitions(-D_CRT_SECURE_NO_WARNINGS)
set(CMAKE_EXE_LINKER_FLAGS "-Xlinker /NODEFAULTLIB:libcmt")
include_directories(${INCLUDE})
target_link_libraries(${PROJECT_NAME} ${INNER_LIBRARIES}raylib opengl32 gdi32 winmm)