#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  this functin prints all natural number from 0 to 98
 *
 * @n: The value tp begin countinh
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
