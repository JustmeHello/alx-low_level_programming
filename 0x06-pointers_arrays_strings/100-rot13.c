#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to be encoded.
 *
 * Return: Returns the encoded string.
 */
char *rot13(char *str)
{
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			for (j = 0; alphabet[j]; j++)
			{
				if (str[i] == alphabet[j])
				{
					str[i] = rot13key[j];
					break;
				}
			}
		}
	}

	return (str);
}
