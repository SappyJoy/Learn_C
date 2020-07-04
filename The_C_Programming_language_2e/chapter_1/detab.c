//
// Created by sappy-joy on 04.07.2020.
//
#include <stdio.h>
#define SPACES_FOR_TAB 4 /* количество пробелов заменяющих один таб */

main() {
    int c, i;

    while ((c = getchar()) != '\n')
        if (c == '\t')
            for (i = 0; i < SPACES_FOR_TAB; i++)
                putchar(' ');
        else
            putchar(c);

    return 0;
}