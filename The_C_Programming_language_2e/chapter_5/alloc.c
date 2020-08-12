//
// Created by Sappy-Joy on 02.08.2020.
//

#define ALLOCSIZE 10000     // объём имеющейся памяти

static char allocbuf[ALLOCSIZE];    // буфер памяти для alloc
static char *allocp = allocbuf;     // следующая свободная позиция

char *alloc(int n)  // возвращает указатель на n символов
{
    if (allocbuf + ALLOCSIZE - allocp >= n) {   // есть место
        allocp += n;
        return allocp - n;  // старый p
    } else // недостаточно места в буфере
        return 0;
}

void afree(char *p) // освобождение памяти по адресу p
{
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}