#include "main.h"
/**
 * print_sign - this fucntion will display  the sign of a number
 * @n: is the int valye for our function argument
 * Return: 1, 0. -1 depending on condition
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
