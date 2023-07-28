#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The input string
 *
 * Return: A pointer to the leet encoded string
 */

char *leet(char *n)
{
	int i, j;
	char *leet_map = "aAeEoOtTlL";
	char *leet_code = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
			for (j = 0; leet_map[j] != '\0'; j++)
			{
				if (str[i] == leet_map[j])
				{
					str[i] = leet_code[j];
					break;
				}
			}
	}

	return (str);
}
