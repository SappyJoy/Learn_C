//
// Created by sappy-joy on 06.07.2020.
//

// qsort: сортировка v[left]...v[right] в порядке возрастания
void qsort(int v[], int left, int right) {
    int i, last;
    void swap(int v[], int i, int j);

    if (left >= right)      /* ничего не делать, если в массиве */
        return;             /* меньше двух элементов */
    swap(v, left, (left+right)/2);  // переместить
    last = left;                      // разделитель в v[0]
    for (i = left+1; i <= right; i++)   // упорядочение
        if (v[i] < v[left])
            swap(v, ++last, i);
    swap(v, left, last);    // вернуть разделитель на место
    qsort(v, left, last-1);
    qsort(v, last+1, right);
}

// swap: обмен местами v[i] и v[j]
void swap(int v[], int i, int j) {
    int temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}