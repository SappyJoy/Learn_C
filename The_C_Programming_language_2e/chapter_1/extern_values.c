//
// Created by sappy-joy on 04.07.2020.
//
#include <stdio.h>
#define MAXLINE 1000 /* максимальная длина строки в потоке */

int max;                /* текущая максимальная длина */
char line[MAXLINE];     /* текущая введённая строка */
char longest[MAXLINE];  /* самая длинная строка из введённых */

int getline_(void);
void copy(void);

/* вывод самой длинной строки в потоке; специальная версия */
main() {
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = getline_()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0) /* была непустая строка */
        printf("%s", longest);
    return 0;
}

/* getline: специальная версия */
int getline_(void) {
    int c, i;
    extern char line[];

    for (i = 0; i<MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* copy: специальная версия */
void copy(void) {
    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}