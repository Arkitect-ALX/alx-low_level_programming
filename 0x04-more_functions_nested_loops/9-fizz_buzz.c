#include <stdio.h>
/**
 * main - program that prints either number or fizz or buzz or fizzbuzz
 * Return: 0
 */

int main(void)
{
	int x;

	while (x <= 100)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
			printf("FuzzBuzz ");
		else if (x % 5 == 0)
		{
			if (x == 100)
			{
				printf("Buzz");
				printf('\n');
			}
			else
				printf("Buzz ");
		}
		else if (x % 3 == 0)
			printf("Fuzz ");
		else
			printf("%d", x);

	x++
	}
	return (0);
}
