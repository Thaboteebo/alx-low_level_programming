#include "main.h"

/**
 *print_times_table - Print times table of the input,
 *
 * @n: The value of the times table to be printed.
 */

void print_times_table(int n)
{
	(0);
}

/**
 * main - Entry point of the program
 * Return: Always 0.
 */

int main(void)
{
	int n, j, product;

	if (n <= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0')
				for (j = 1; j <= n; j++)
				{
					_putchar(',');
					_putchar(' ');

					product = i * j;
					if (product  == 99)
					{
						_putchar(' ');
					}
					if (product <= 9)
					{
						_putchar(' ');
					}
					if (product >= 100)
					{
						_putchar((product / 100) + '0');
						_putchar((product / 10) % 10 + '0');
					}
					else if (product <= 99 && product >= 10)
					{
						_putchar((product / 10) + '0');
					}
					_putchar((product / 10) + '0');
				}
			_putchar('\n');
		}
		return (0);
	}
}
