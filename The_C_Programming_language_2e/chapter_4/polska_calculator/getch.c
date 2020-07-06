//
// Created by Sappy-Joy on 7/5/2020.
//
#include <stdio.h>
#define BUFSIZE 100

static char buf[BUFSIZE];      /* буфер для ungetch */
static int bufp = 0;           /* следующая свободная позиция в buf */

/* ввод символа (возможно возвращаемого в поток) */
int getch(void) {
    return (bufp > 0) ? buf[--bufp] : getchar();
}

/* возвращение символа в поток ввода */
void ungetch(int c) {
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}