#include "main.h"
/**
 * print_line - this function will  dra a straignt line when called
 * @n: Variable passed as argument
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x <= n; x++)
		_putchar('_');
	_putchar('\n');
}
