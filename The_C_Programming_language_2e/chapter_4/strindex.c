//
// Created by sappy-joy on 05.07.2020.
//

#include <stdio.h>
#define MAXLINE 1000    /* максимальная длина входной строки */

int getline_(char *line, int max);

int strindex(char source[], char serchfor[]);

char pattern[] = "ould";    /* образец для поиска */

/* поиск всех строк, содержащих заданный образец */
int main() {
    char line[MAXLINE];
    int found = 0;

    while (getline_(line, MAXLINE) > 0)
        if (strindex(line, pattern) >= 0) {
            printf("%s", line);
            found++;
        }
    return found;
}

/* getline_: считывает строку в s, возвращает её длину */
int getline_(char *line, int max) {
    int c, i;

    i = 0;
    while (--max > 0 && (c=getchar()) != EOF && c != '\n')
        line[i++] = c;
    if (c == '\n')
        line[i++] = c;
    line[i] = '\0';
    return i;
}

/* strindex: возвращает индекс строки t в s, -1 при отсутствии */
int strindex(char s[], char t[]) {
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        for (j=i, k=0; t[k] != '\0' && s[j]==t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}