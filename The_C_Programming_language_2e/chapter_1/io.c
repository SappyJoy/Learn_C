//
// Created by sappy-joy on 03.07.2020.
//
#include <stdio.h>

/* копирование входного потока в выходной */
main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
}