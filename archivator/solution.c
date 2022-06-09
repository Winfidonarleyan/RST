/*
 * solution.c
 * Distributed under terms of the MIT license.
 * Сложность: 4
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdbool.h>

/*
 * Функция archiving принимает строку заглавных латинских символов
 * и возвращает упакованный вариант этой строки.
 * Символы упаковываются по следующим правилам:
 * последовательность из нескольких одинаковых символов ("DDD") преобразуется в ("3D")
 * последовательность из одного символа переносится без изменений
 *
 * Пример:
 * archiving("WFFGGGH");
 * Должен вернуть "W2F3GH"
 *
 * Вызывающий код освобождает возвращаемый указатель
 */

void append(char* s, char c)
{
    int len = strlen(s);
    s[len] = c;
}

// AA H BBB CCC DD TTTTTTT EEEEE AAAAAAAAAAA
char* archiving(char* input)
{
    int len = strlen(input);
    char newStr[1024] = "";
    char buff[5] = "";

    for (int i = 0; i < len; i++)
    {
        char currentChar = input[i];
        int j = i + 1;

        if (j >= len)
            break;

        char nextChar = input[j];

        if (nextChar != currentChar)
        {
            // printf("%c\n", currentChar);
            append(newStr, currentChar);
            continue;
        }
        else
        {
            while (true)
            {
                j++;

                if (input[j] != currentChar)
                {
                    // printf("%u%c\n", j - i, currentChar);
                    snprintf(buff, 5, "%u%c", j - i, currentChar);
                    strcat(newStr, buff);
                    i = j - 1;
                    break;
                }
            }
        }
    }

    input = newStr;
    return input;
}

