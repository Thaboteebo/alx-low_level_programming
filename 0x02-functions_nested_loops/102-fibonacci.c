#include <stdio.h>

/**
 * main - Print the first 52 fibonacci numbers
 * Return: Nothing!
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0. fib2 = 1, sum;

	print("%lu, ", fib1);
	print("%lu, ", fib2);

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
