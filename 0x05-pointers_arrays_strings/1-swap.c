#include "math.h"
/**
 * swap_int- starting point
 * @a: pointer
 * @b: pointer
 * Return: always zero
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
