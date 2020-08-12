//
// Created by Sappy-Joy on 04.08.2020.
//

// strcmp: возвращает <0 при s<t, 0 при s==t, >0 при s>t
int strcmp(char *s, char *t) {
    int i;

    for (i = 0; s[i] == t[i]; i++)
        if (s[i] == '\0')
            return 0;
    return s[i] - t[i];
}

// strcmp: возвращает <0 при s<t, 0 при s==t, >0 при s>t
int strcmp(char *s, char *t) {
    for ( ; *s == *t; s++, t++)
        if (*s == '\0')
            return 0;
    return *s - *t;
}
