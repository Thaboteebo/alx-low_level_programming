#include "main.h"

/**
 * _strbrk - Program entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}

	return ('\0');
}
