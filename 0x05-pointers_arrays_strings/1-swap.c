#include "main.h"

/**
 * swap_int - Swap the values of two integers
 * @a: integer to the first integer swapped
 * @b: integer to the second integer swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*a = n;
}
