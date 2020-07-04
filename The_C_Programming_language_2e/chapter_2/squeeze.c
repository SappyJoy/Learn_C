//
// Created by sappy-joy on 04.07.2020.
//

/* squeeze: удаляет все символы c из строки s */
void squeeze(char s[], int c) {
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

/* strcat: присоединяет строку t к концу s; в s должно быть достаточно места */
void strcat(char s[], char t[]) {
    int i, j;

    i = j = 0;
    while (s[i] != '\0')    /* поиск конца s */
        i++;
    while ((s[i++] = t[j++]) != '\0')   /* копирование t */
        ;
}