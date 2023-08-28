#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing bytes to search for.
 *
 * Return: A pointer to the byte in @s that matches one of the bytes in @accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        while (char *a = accept; *a != '\0'; a++)
        {
            if (*s == *a)
            {
                return s;
            }
        }
        s++;
    }

    return NULL;
}

