//
// Created by sappy-joy on 05.07.2020.
//

#include <stdio.h>
#define MAXLINE 1000    /* максимальная длина входной строки */

int getline_(char line[], int max);

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