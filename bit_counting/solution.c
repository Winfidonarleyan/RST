/*
 * solution.c
 * Distributed under terms of the MIT license.
 * Сложность: 6
 */

#include <stddef.h>

/*
 * Напишите функцию, которая принимает на вход целое число и возвращает количество битов,
 * которые равны единице в двоичном представлении этого числа.
 * Вы можете предполагать, что ввод неотрицательный.
 *
 * Пример:
 * двоичное представление 1234 это 10011010010, поэтому в этом случае функция должна вернуть 5.
 */

// size_t countBits(unsigned value)
// {
//     char buff[100] = "";
//     char* toInt = itoa(value, buff, 2);

//     int len = strlen(toInt);
//     size_t count = 0;

//     for (int i = 0; i < len; i++)
//     {
//         if (toInt[i] == '1')
//             count++;
//     }

//     return count;
// }

size_t countBits(unsigned value)
{
    unsigned arr[50];
    int i = 0;

    for (; i < 50; i++)
        arr[i] = 0;

    i = 0;
    while (value != 0)
    {
        if (value % 2 == 0)
        {
            arr[i] = 0;
            value = value / 2;
        }
        else
        {
            arr[i] = 1;
            value = value / 2;
        }
        i++;
    }

    i--;

    size_t count = 0;

    for (; i >= 0; i--)
        if (arr[i] == 1)
            count++;

    return count;
}

