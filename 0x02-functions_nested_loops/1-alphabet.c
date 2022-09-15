#include "main.h"
/**
 * print_alphabet - function will print a b c to z using for loop
 *
 * Return: 0 in success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_getchar(c);
	}
_putchar('\n');
}
