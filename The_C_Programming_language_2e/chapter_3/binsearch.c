//
// Created by sappy-joy on 04.07.2020.
//
#include <stdio.h>

int binsearch(int x, int v[], int n);

main() {

}


int binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else    /* найдено соответствие */
            return mid;
    }
    return -1; /* нет соответствия */
}