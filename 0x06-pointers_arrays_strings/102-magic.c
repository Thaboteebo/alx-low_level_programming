#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This program demonstrates a magic trick with pointers.
 * It swaps the value of two integers without using a temporary variable.
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int n, m;
	int *p1, *p2;

	n = 98;
	m = 402;
	p1 = &n;
	p2 = &m;

	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;

	printf("n = %d, m = %d\n", n, m);

	return (0);
}
