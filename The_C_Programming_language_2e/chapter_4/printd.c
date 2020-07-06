//
// Created by sappy-joy on 05.07.2020.
//

#include <stdio.h>

void printd(int n) {
    if (n < 0) {
        putchar('0');
        n = -n;
    }
    if (n / 10)
        printd(n / 10);
    putchar(n % 10 + '0');
}