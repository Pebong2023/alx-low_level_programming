#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of a string that
 *           consists of only the characters found in another string.
 * @s: The string to be analyzed.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s that consist
 *         only of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int n = 0;
    int r;

    while (*s)
    {
        for (r = 0; accept[r]; r++)
        {
            if (*s == accept[r])
            {
                n++;
                break;
            }
            else if (accept[r + 1] == '\0')
                return n;
        }
        s++;
    }

    return (n);
}
