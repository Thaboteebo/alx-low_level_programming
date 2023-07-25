#include "main.h"

/**
 * print_array - Prints n elements of an erray
 * @a: array
 * @n: number of vakues to be printed
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
}
