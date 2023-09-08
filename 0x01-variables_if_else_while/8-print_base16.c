#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print numbers from 0 to 10 and lowercase letters from 'a' to 'e'
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int x;
    char z;

    for (x = 0; x <= 10; x++)
    {
        putchar('0' + x);
    }

    for (z = 'a'; z <= 'e'; z++)
    {
        putchar(z);
    }

    putchar('\n');
    return (0);
}
