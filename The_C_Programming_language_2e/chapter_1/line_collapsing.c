//
// Created by sappy-joy on 04.07.2020.
//
#include <stdio.h>
#define MAXLINE 1000    /* максимальная длина строки в потоке */
#define WIDTH   70      /* длина максимальной строки */

int getline_(char line[], int maxline);

int main() {
    int i;

    int len;
    char line[MAXLINE];

    while ((len = getline_(line, MAXLINE)) > 0) {
        for (i = 0; i < len; ++i) {
            if (i != 0 && (i % WIDTH) == 0)
                putchar('\n');
            putchar(line[i]);
        }
    }
}

/* gitline: считывает строку в s, возвращает ее длину */
int getline_(char s[], int maxline) {
    int c, i;

    for (i = 0; i < maxline - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}