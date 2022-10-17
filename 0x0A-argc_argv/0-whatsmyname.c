#include "main.h"
#include <stdio.h>

/**
 * main  This is the function to print the name followed  by a new line
 * @argc: Counts of content
 * @argv: The strings typed
 * Return: 0  for success
 */

int main ( int argc, char *argv[])
{
	printf("%s\n", *argv);
	return 0;
}
