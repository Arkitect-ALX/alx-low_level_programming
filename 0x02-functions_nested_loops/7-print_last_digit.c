#include "main.h"
/**
 * print_last_digit - functiion to write to stdout the last digit of a number
 * @n: The number/ value in the argument
 *
 *Return: 0 in success
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
