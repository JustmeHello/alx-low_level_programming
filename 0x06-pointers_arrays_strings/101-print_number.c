#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Handle the case of a single digit */
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		/* Recursive call to print each digit */
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
