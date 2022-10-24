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

	*a = *b;
	aux = *a;
	*b = aux;
}
