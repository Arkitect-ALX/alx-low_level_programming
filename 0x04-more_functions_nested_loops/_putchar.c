#include <unistd.h>

/**
 * _putchar -  will write the character c to the stdout
 * @c: This is the character to print
 * Return: 0  Success
 * on error, -1 in error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
