#include <stdio.h>
/**
 *main - prints all single numbers of base 10 starting from 0
 *followed by new line using putchar
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
