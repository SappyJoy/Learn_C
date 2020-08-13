//
// Created by Sappy-Joy on 13.08.2020.
//

#include <stdio.h>

// echo: вывод аргументов командной строки; 1-я версия
main(int argc, char *argv[]) {
    int i;

    for (i = 1; i < argc; i++)
        printf("%s%s", argv[i], (i < argc-1) ? " " : "");
    printf("\n");
    return 0;
}