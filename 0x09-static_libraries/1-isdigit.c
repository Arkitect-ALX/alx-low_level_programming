#include "main.h"
/**
 * _isdigit - function to check fo digits 0 - 9
 * @c: Argument to be passed into a function
 * Return: 1 if a digit or 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}

	return (0);
}
