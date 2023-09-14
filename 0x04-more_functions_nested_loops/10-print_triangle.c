#include "main.h"
/**
 * main - Entry point
 *
 * Description: print right aligned triangle with #
 *
 * Return: Always 0 (Success)
 */
int main()
{
    int size, i, n;
    scanf("%d", &n);

    if (n <= 0)
    {
        putchar('\n');
        return 0;
    }

    for (size = n; size >= 0; size--)
    {
        for (i = 1; i <= size; i++)
        {
            putchar(' ');
        }

        for (i = 0; i < n - size; i++)
        {
            putchar('#');
        }

        putchar('\n');
    }
    return 0;
}
