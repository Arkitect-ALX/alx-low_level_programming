#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size parameters of triangle
 * Return: returns nothng
 */

void print_triangle(int size)
{
	int  x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for ((y = y - x); y < 0; y--)
			{
				_putchar(' ');
			}

			for (y = 0; y < x; y++)
			{
				_putchar('#');
			}

			if (x == size)
			{
				continue;
			}

			_putchar('\n');
		}
	}
	_putchar('\n');
}
