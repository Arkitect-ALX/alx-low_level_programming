#include "main.h"

/**
 * _isupper - distinguish an uppercase letter from a lowercase one
 * @c: argument to be passed into the fuction
 * Return: 1 if uppercase and 0 if not
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
