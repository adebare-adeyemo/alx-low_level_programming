#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	char alp;
	int i, len, len1;

	len = 0;
	leni = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	leni = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		alp = s[i];
		s[i] = s[leni];
		s[leni--] = alp;
	}
}
