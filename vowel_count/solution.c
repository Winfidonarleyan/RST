/*
 * solution.c
 * Distributed under terms of the MIT license.
 * Сложность: 7
 */

#include <stddef.h>
#include <string.h>

/*
 * Функция get_count возвращает количество гласных в заданной строке.
 * В качестве гласных рассматриваются только (a, e, i, o, u) но не (y).
 * Входная строка будет состоять только из строчных букв и/или пробелов.
 */

size_t get_count(const char *s)
{
    int count = 0;
    int len = strlen(s);
    
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            count++;
    }
    
    // Your code here
    return count;
}

