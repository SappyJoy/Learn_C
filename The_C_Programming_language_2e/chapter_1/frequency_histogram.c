//
// Created by Sappy-Joy on 7/4/2020.
//
#include <stdio.h>

/* гистограмма частот, с которыми встречаются во входном потоке различные символы */
main() {
    int c, i, nchar[256];

    for (i = 0; i < 256; ++i)
        nchar[i] = 0;

    while ((c = getchar()) != '\n')
        nchar[c]++;

    for (i = 0; i < 256; ++i) {
        printf("%c\t", i);
        for (int j = 0; j < nchar[i]; j++)
            printf("*");
        printf("\n");
    }
}