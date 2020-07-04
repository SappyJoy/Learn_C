//
// Created by Sappy-Joy on 7/3/2020.
//

#include <stdio.h>

/* проявляет скрытые символы */
main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
}