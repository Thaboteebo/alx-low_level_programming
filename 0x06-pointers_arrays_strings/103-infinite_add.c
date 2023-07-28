#include "main.h"
#include <stdio.h>

/**
 * rev_string Reverses a string in place.
 * @str: The string to be reversed.
 */

void rev_atring(char *str)
{
	int start = 0;
	int end = 0;
	char temp;

	while (str[end] != '\0')
		end++;

	end++;

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of rhe buffer.
 *
 * Return: The pointer to the results or NULL if the result cannot be stored.
 */

char *infinite_add(char *1n, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0; carry = 0, sum = 0;
	int i, j;

	return (r);
}
