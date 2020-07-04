//
// Created by sappy-joy on 03.07.2020.
//
#include <stdio.h>

/* вывод таблицы температур по Фаренгейту и Цельсию
 * для fahr = 0, 20, ..., 300 */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* нижняя границы температур в таблице */
    upper = 300;    /* верняя граница */
    step = 20;      /* величина шара */

    printf("%3s%7s\n", "F", "C");

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f%7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
