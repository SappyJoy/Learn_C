//
// Created by sappy-joy on 03.07.2020.
//
#include <stdio.h>

/* подсчет символов во входном потоке; 1-я версия */
int main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}
