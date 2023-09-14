#include "main.h"
/**
 * main - Entry point
 *
 * Description: Prints the largest prime factor of a 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    long int n = 612852475143;
    long int div = 2, maxFact = 0;

    while (n != 0)
    {
        if (n % div != 0)
        {
            div = div + 1;
        }
        else
        {
            maxFact = n;
            n = n / div;
            if (n == 1)
            {
                printf("%ld is the largest prime factor!\n", maxFact);
                break;
            }
        }
    }

    return (0);
}
