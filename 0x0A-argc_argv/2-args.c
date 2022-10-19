#include "main.h"
#include <stdio.h>

/**
 * main   - To print content within the command line by line
 * @argc: - takes note of character count
 * @argv: - takes note of the characters themselves
 * Return: - 0 in success
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", i, argv[i]);
	}
	return (0);
}
