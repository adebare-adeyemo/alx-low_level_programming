#include "main.h"

/**
 * _strlen- print the result
 *
 * @s: points tp the char
 * Return: the length of the char
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; c++)
	{
		c++;
	}
	return (c);
}
