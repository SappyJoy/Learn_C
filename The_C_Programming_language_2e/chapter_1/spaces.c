//
// Created by Sappy-Joy on 7/3/2020.
//

#include <stdio.h>

/* удаление ненужных пробелов из строки */
main() {
    int c, flag;

    flag = 0;
    while((c = getchar()) != EOF) {
        if (c == ' ') {
            if (flag != 1)
                putchar(c);
            flag = 1;
        } else {
            putchar(c);
            flag = 0;
        }
    }
}