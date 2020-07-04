//
// Created by sappy-joy on 04.07.2020.
//
#include <stdio.h>

int bitcount(unsigned x);
int bitcount2(unsigned x);

main() {
    int x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        printf("%3d | %3d %3d\n", i, bitcount(i), bitcount2(i));
    }
}

/* bitcount: подсчитывает единицы в двоичной записи x */
int bitcount(unsigned x) {
    int b;

    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;
    return b;
}

/* bitcount: ускоренная версия */
int bitcount2(unsigned x) {
    int b = 0;

    while (x != 00) {
        x &= (x-1);
        b++;
    }
    return b;
}