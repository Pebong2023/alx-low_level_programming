#include <stdio.h>
/**
 *main - print all the possible combinations of single digit numbers
 *followed by a new line
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 5; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
