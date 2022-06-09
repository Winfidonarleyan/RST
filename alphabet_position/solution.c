/*
 * solution.c
 * Distributed under terms of the MIT license.
 * Сложность: 6
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

int GetAlphabetPos(char ch)
{
    if (ch < 'a' || ch > 'z')
        return 0;

    return ch - 96;
}

/*
 * Необходимо, учитывая строку, заменить каждую букву ее позицией в алфавите.
 * Если что-то в тексте не является буквой, игнорируйте это и не возвращайте.
 * «a» = 1, «b» = 2 и т.д.
 *
 * Пример:
 * alphabet_position("The sunset sets at twelve o' clock.");
 * Должен вернуть "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11" (в виде строки)
 *
 * Вызывающий код освобождает возвращаемый указатель
 */

char *alphabet_position(char *text)
{
    int len = strlen(text);
    // LOG_INFO("Len: {}", len);

    if (len > 1024)
        return text;

    char newStr[1024] = "";
    bool isFirst = true;

    for (int i = 0; i < len; i++)
    {
        char ch = (char)tolower(text[i]);
        int pos = GetAlphabetPos(ch);
        if (!pos)
            continue;

        if (!isFirst)
            strcat(newStr, " ");

        if (isFirst)
            isFirst = false;

        char buff[5] = "";
        snprintf(buff, 5, "%d", pos);
        // itoa(pos, buff, 10);
        strcat(newStr, buff);
    }

    text = newStr;
    return text;
}

