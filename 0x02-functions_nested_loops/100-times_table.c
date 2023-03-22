#include "main.h"
/**
*print_times_table - prints the n time table starting with 0
*@n: number of the times table
*/
void print_times_table(int n)
{
	int m, y, z;

	if (m >= 0 && m <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			for (y = 0; y <= n; y++)
			{
				z = y * m;

				if (z == 0)
				{
					_putchar(z + '0');
				} else if (z < 10 && y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				} else if (z >= 10 && z < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				} else if (z >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

