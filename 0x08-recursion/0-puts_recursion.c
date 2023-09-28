#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line recursively.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') // Check for the end of the string
	{
		putchar('\n'); // Print a new line when the end is reached
		return;
	}

	putchar(*s); // Print the current character
	_puts_recursion(s + 1); // Recursively call the function with the next character
}
