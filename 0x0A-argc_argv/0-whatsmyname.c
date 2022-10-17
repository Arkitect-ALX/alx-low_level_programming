#include "main.h"
#include <stdio.h>

/**
 * main -  This is the function to print the name followed  by a new line
 * @argc: The count of strings
 * @argv: The strings typed
 * Return: 0  for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
