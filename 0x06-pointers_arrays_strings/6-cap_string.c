#include "main.h"

/**
 * cap_string - capitalizes each word depending on
 * preceding string.
 * @str: a pointer to a string
 * Return: a pointer to the final string
 */

char *cap_string(char *str)
{
    int i = 1;

    while (str[i] != '\0')
    {
        if (str[i - 1] == ' ' || str[i - 1] == '\t' ||
            str[i - 1] == '\n' || str[i - 1] == ',' ||
            str[i - 1] == ';' || str[i - 1] == '.' ||
            str[i - 1] == '!' || str[i - 1] == '?' ||
            str[i - 1] == '\"' || str[i - 1] == '(' ||
            str[i - 1] == ')' || str[i - 1] == '{' ||
            str[i - 1] == '}')
        {
            if (str[i] >= 97 && str[i] <= 122)
                str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}
