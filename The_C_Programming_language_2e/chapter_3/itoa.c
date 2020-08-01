//
// Created by sappy-joy on 04.07.2020.
//
void reverse(char s[]);

void itoa(int n, char s[]) {
    int i, sign;

    if ((sign = n) < 0)     /* записываем знак */
        n = -n;             /* делаем число положительным */
    i = 0;
    do {                    /* генерируем цифры в обратном порядке */
        s[i++] = n % 10 + '0';      /* извлекаем цифру */
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}