#include "main.h"
/**
 * print_line - print a steight line to screen continously
 * @n: variable to be passed as argument
 *
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
		_putchar(95);
	_putchar('\n');
}
