cmake_minimum_required(VERSION 3.29.3)

project(dsa
    LANGUAGES C
)

add_executable(${PROJECT_NAME}
    src/main.c
    src/linkedlist.c
    src/linkedlist.h
)

target_compile_features(${PROJECT_NAME} PRIVATE c_std_17)

target_compile_options(${PROJECT_NAME}
    PRIVATE
    -Wall
    -Wextra
    -Wpedantic
    -O3
)
