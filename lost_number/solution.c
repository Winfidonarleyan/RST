/*
 * solution.c
 * Distributed under terms of the MIT license.
 * Сложность: 7
 */

#include <stddef.h>
#include <stdlib.h>

int SortCompare(const void* x1, const void* x2)
{
    return (*(int*)x1 - *(int*)x2);
}

/* Дан массив идущих подряд чисел от 1 до N в произвольном порядке.
 * В случае пустого массива необходимо вернуть 0.
 * Из массива убран один элемент.
 * Найти пропущенное число.
 */

int lost_number(int* a, size_t size)
{
    if (!a || !size)
        return 0;

    // Sorting by order
    qsort(a, size, sizeof(int), SortCompare);

    int findNumber = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (a[i] != i + 1)
        {
            findNumber = i + 1;
            break;
        }
    }
    
    return findNumber;
}

