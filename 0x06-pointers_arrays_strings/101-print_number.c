#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;
	int is_negative = 0;

	if (n < 0)
	{
		is_negative = 1;
		_putchar('-');
	}

	while (n / divisor > 9)
		divisor *= 10;

	while (divisor > 0)
	{
		int digit = (n / divisor) % 10;
		_putchar('0' + (is_negative ? -digit : digit));
		divisor /= 10;
	}
}
