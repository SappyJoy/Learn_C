//
// Created by sappy-joy on 06.07.2020.
//
#include <stdio.h>

#define dprint(expr) printf(#expr " = %g\n", expr)
#define max(A, B) ((A) > (B) ? (A) : (B))
#define paste(front, back) front ## back

main() {
    double x, y;
    printf("x = ");
    scanf("%lf", &x);
    printf("y = ");
    scanf("%lf", &y);

    dprint(x / y);
}