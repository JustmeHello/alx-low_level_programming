#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: The string to print.
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str = str + 2;
	}
	putchar('\n');
}
