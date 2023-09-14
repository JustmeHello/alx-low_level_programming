#include "main.h"
/**
 * main - Entry point
 *
 * Description: print 0 to 14, 10 times
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (j = 0; j < 10; j++)
    {
        for (i = 0; i <= 14; i++)
        {
            if (i > 9)
                putchar(i / 10 + '0');
            putchar(i % 10 + '0');
        }
        putchar('\n');
    }
}
