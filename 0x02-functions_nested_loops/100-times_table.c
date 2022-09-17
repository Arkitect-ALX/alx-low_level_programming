#include "main.h"

/**
 * print_times_table - prints the n tables, counting starts from 0
 * @n: number of he times table
 */
void print_times_table(int n)
{
	int i;
	int j;
	int r;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				print_any_int(r);

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					if ((i * (j + 1)) < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if ((i * (j + 1)) < 100)
					{
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
