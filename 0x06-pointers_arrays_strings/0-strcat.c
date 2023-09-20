#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest.
 * @dest: String that will be appended.
 * @src: String to be concatenated upon.
 *
 * Return: Returns pointer to @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index])
	{
		dest_len++;
		index++;
	}

	index = 0;

	while (src[index])
	{
		dest[dest_len] = src[index];
		dest_len++;
		index++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
