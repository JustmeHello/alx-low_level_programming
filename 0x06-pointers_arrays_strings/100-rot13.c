#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to be encoded.
 *
 * Return: Returns the encoded string.
 */
char *rot13(char *str)
{
	int i = 0;
	char *s = str;
	char from[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char to[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s)
	{
		char *pos = from;
		char *newChar = to;
		int found = 0;

		while (*pos)
		{
			if (*s == *pos)
			{
				*s = *newChar;
				found = 1;
				break;
			}
			pos++;
			newChar++;
		}

		if (found)
			s++;
		else
			s++;
	}

	return (str);
}
