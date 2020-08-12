//
// Created by Sappy-Joy on 04.08.2020.
//

// strcpy: копирует строку t в s; версия с индексированием массива
void strcpy(char *s, char *t) {
    int i;

    i = 0;
    while ((s[i] = t[i]) != '\0')
        i++;
}

// strcpy: копирует строку t в s; 1-я версия с указателями
void strcpy(char *s, char *t) {
    while ((*s = *t) != '\0') {
        s++;
        t++;
    }
}

// strcpy: копирует строку t в s; 2-я версия с указателями
void strcpy(char *s, char *t) {
    while ((*s++ = *t++) != '\0')
        ;
}

// strcpy: копирует строку t в s; 3-я версия с указателями
void strcpy(char *s, char *t) {
    while (*s++ = *t++)
        ;
}