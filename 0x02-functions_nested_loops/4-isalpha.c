#include "main.h"

/**
  * _isalpha - Checks for alphabetic character
  * @c: The character to be checked
  *
  * Return: 1 for alphabetic character or 0 for anything else
  */
int _isalpha(int c)
{
<<<<<<< HEAD
       if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
       {
               return (1);
       }
       return (0);
=======
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
>>>>>>> 7d4f15e4a53833b5e8401e20f5a190c14003d8f1
}
