//
// Created by Sappy-Joy on 02.08.2020.
//

// strlen: возвращает длину строки s
int strlen(char *s) {
    int n;
    for (n = 0; *s != '\0'; s++)
        n++;
    return n;
}