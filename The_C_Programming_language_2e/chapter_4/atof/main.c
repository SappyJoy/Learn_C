//
// Created by sappy-joy on 05.07.2020.
//

#include <stdio.h>
#define MAXLINE 100

/* примитивный калькулятор */
int main() {
    double sum, atof(char []);
    char line[MAXLINE];
    int getline_(char line[], int max);

    sum = 0;
    while (getline_(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));
    return 0;
}