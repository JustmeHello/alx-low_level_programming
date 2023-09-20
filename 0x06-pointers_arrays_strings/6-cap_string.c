#include "main.h"

/**
 * cap_string - Capitalize the first character of each word in a string
 * @str: The input string
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (index == 0 ||
			str[index - 1] == ' ' || str[index - 1] == '\t' ||
			str[index - 1] == '\n' || str[index - 1] == ',' ||
			str[index - 1] == ';' || str[index - 1] == '.' ||
			str[index - 1] == '!' || str[index - 1] == '?' ||
			str[index - 1] == '"' || str[index - 1] == '(' ||
			str[index - 1] == ')' || str[index - 1] == '{' ||
			str[index - 1] == '}')
		{
			str[index] -= 32;
		}

		index++;
	}
	return (str);
}
