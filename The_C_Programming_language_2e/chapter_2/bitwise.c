//
// Created by sappy-joy on 04.07.2020.
//
#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

main() {
    int x, p, n;
    scanf("%d %d %d", &x, &p, &n);
    printf("%d\n", getbits(x, p, n));
    return 0;
}

/* getbits: извлекает n бит, начиная с p-й позиции */
unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p+1-n)) & ~(~0 << n);
}