#include "main.h"
/**
 * main - Entry point
 *
 * Description: FIZZ/3 , BUZZ/5 - 0 to 100
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("FIZZ ");
        }
        if (i % 5 == 0)
        {
            printf("BUZZ ");
        }
        if (i % 3 != 0 && i % 5 != 0)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
