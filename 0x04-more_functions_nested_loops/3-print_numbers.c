#include "main.h"
/**
 * main - Entry point
 *
 * Description: print 0 to 9 using only putchar twice
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i = 0;

    while (i <= 9)
    {
        putchar(i + '0');
        i = i + 1;
    }

    putchar('\n');

    return 0;
}
