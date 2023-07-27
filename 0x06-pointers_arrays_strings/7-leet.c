#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The input string to be encoded
 *
 * Return: A pointer to the encoded string
 */

char *leet(char *str)
{
	char *leet_chars = "AEOTLaeotl";
	char *leet_replacements = "4307143071";
	int i, j;

	for (i = 0; str[i] != '\0'; j++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
		}
	}

	return (str);
}
