#include "main.h"
#include <stdio.h>
/**
 * _abs - function calcualtes the absolute value of an integer
 * @c: is the int value ehat will be passsed during an argument
 * Return: 0 in success
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
