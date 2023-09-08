#include <stdio.h>

/**
 * main - prints all single-digit numbers of base 10 starting from 0
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}

	printf("\n"); /* Add a newline character after printing all digits */

	return (0);
}
