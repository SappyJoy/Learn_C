//
// Created by Sappy-Joy on 7/4/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    srand(time(0));

    for (int i = 0; i < 5; i++)
        printf("%d\n", rand());
}