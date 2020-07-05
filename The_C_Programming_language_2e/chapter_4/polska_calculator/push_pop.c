//
// Created by Sappy-Joy on 7/5/2020.
//
#include <stdio.h>
#define MAXVAL 100      /* максимальная глубина стека val */

int sp = 0;             /* следующая свободная позиция в стеке */
double val[MAXVAL];     /* стек операндов */

/* push: помещает число f в стек операндов */
void push(double f) {
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
}

/* pop: извлекает и возвращает верхнее число из стека */
double pop(void) {
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}