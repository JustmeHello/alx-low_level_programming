#include "main.h"

/**
 * print_number - Prints out any integer number
 *
 * @n: number to be printed out
 */

void print_number(int n)
{
	int putchar(char c)
{
    return write(1, &c, 1);
}
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		 num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	putchar((num % 10) + '0');
}
