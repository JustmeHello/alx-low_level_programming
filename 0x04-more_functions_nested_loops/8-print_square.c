#include "main.h"
/**
 * main - Entry point
 *
 * Description: turn number to matrix in #
 *
 * Return: Always 0 (Success)
 */
int main()
{
    int size, i,n;
    scanf("%d", &n);
    if (n <= 0)
    {
        putchar('\n');
        return 0;
    }

    for (size = 1; size <= n; size++)
    {
        for (i = 1; i <= n; i++)
        {
            putchar('#');
        }

        putchar('\n');
    }
    return 0;
}
