#include "main.h"
/**
 * main - Entry point
 *
 * Description: Checks if a character is a digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c;
    scanf(" %c", &c);

    if (isdigit(c))
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
