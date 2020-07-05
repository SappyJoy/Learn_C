cmake_minimum_required(VERSION 3.15.3)
project(The_C_Programming_language_2e C)

set(CMAKE_C_STANDARD 99)

add_executable(The_C_Programming_language_2e chapter_4/polska_calculator/main.c chapter_4/polska_calculator/push_pop.c
        chapter_4/polska_calculator/getop.c chapter_4/polska_calculator/getch_ungetch.c)