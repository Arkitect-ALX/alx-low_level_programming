#include "main.h"

/**
 * rot13 - rot13 encoder
 * @str: String to be encoded
 *
 * Return: Address of the encoed string
 */

char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform_2(str[i]);
		i++;
	}
	return (str);
}

/**
 * transform_2 - helper function to map a letter with its rot13 encoding
 * @x: char to be encoded
 *
 * Return: the encoded char
 */

char transform_2(char x)
{
	char one[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char tuw[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	char replacement = x;

	while (i < 52)
	{
		if (x == one[i])
		{
			replacement = two[i];
			break;
		}
		i++
	}
	return (replacement);
}
