#include <stdio.h>
/**
 *main - prints the alphabet in lowercaase
 *followed by new line
 *Return - Always 0 (success)
 */

int main(void)
{
	char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        printf("%c ", c);
	}
	putchar('\n');
	return (0);
}
