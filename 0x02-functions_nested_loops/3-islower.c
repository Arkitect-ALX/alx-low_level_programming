#include "main.h"
/**
 * _islower - function to check the status of a lower case
 * @c: is the int thag will use for the argument  for the function
 * Return: 0 in success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
