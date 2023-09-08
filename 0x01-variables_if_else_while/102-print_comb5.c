#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible different combinations of three digits
 * separated by a comma and a space.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
      putchar(' ');
		{
			for (k = 0; k <= 9; k++)
			{
        for (l = 0; l <= 9; l++)
        {
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
        putchar(l + '0');

				if (i != 9 || j != 9 || k != 9 || l!= 9)
				{
					putchar(',');
					putchar(' ');
        }
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
