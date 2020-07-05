//
// Created by sappy-joy on 05.07.2020.
//
#include <stdio.h>

/* getline_: считывает строку в s, возвращает её длину */
int getline_(char line[], int max) {
    int c, i;

    i = 0;
    while (--max > 0 && (c=getchar()) != EOF && c != '\n')
        line[i++] = c;
    if (c == '\n')
        line[i++] = c;
    line[i] = '\0';
    return i;
}