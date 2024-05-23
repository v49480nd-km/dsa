cmake_minimum_required(VERSION 3.29.3)

project(dsa
    LANGUAGES C
)

set(SOURCES
    src/main.c
    src/array.c
    src/array.h
    src/hashmap.c
    src/hashmap.h
    src/linkedlist.c
    src/linkedlist.h
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_compile_features(${PROJECT_NAME} PRIVATE c_std_17)

target_compile_options(${PROJECT_NAME}
    PRIVATE
    -Wall
    -Wextra
    -Wpedantic
    -O3
)
