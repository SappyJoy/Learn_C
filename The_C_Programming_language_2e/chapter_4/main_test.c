//
// Created by sappy-joy on 05.07.2020.
//

#include <stdio.h>

void qsort(int v[], int left, int right);

main() {
    int n;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    qsort(v, 0, n-1);

    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}