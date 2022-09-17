#include "main.h"

/**
 *_isupper - checks if a character is uppercase or lowercase
 *@c: value to be passed
 *Return: 1 if charrater is uppercase or 0 if otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
