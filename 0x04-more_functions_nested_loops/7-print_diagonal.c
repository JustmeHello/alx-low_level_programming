#include "main.h"
/**
 * main - Entry point
 *
 * Description: turn number to \
 *
 * Return: Always 0 (Success)
 */
int main()
{
    int spaces, i,n;
    scanf("%d", &n);
    if (n <= 0)
    {
        putchar('\n');
        return 0;
    }

    for (spaces = 0; spaces < n; spaces++)
    {
        for (i = 0; i < spaces; i++)
        {
            putchar(' ');
        }
        putchar('\\');
        putchar('\n');
    }
    return 0;
}
