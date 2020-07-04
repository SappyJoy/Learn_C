//
// Created by sappy-joy on 03.07.2020.
//
#include <stdio.h>

main() {

    float celsius, fahr;
    int lower, upper, step;

    lower = 0;      // Нижняя граница температур в таблице
    upper = 300;    // Верхняя граница температур
    step = 20;      // Величина шага

    printf("%3s%7s\n", "C", "F");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0) * (celsius+32.0);
        printf("%3.0f%7.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
