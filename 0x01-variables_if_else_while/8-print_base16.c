#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print numbers in base 16 (hexadecimal)
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}

	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}
