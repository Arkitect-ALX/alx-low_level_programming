#include "main.h"

/**
 *print_diagonal - function that prints line diagonally
 *@n: integr parameter
 */
void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k <= j; k++)
				_putchar(' ');
				_putchar(92);
				_putchar('\n');
		}
		_putchar('\n');
	}
}
