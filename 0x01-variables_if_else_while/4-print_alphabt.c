#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function of the program.
 * It prints the lowercase alphabet except for 'e' and 'q',
 * followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
	}

	putchar('\n');

	return (0);
}

