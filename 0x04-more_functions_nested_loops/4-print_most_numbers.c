#include "main.h"
/**
 * main - Entry point
 *
 * Description: print 0 to 9 using only putchar twice skip 2,4
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i = 0;

    while (i <= 9)
    {
        if (i == 2 || i == 4)
        {
            i = i + 1;
            continue;
        }

        putchar(i + '0');
        i = i + 1;
    }

    putchar('\n');

    return 0;
}
