#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which we want to find the square root.
 *
 * Return: The natural square root of n, or -1 if n doesn't have an exact square root.
 */
int _sqrt_recursion(int n)
{
	int guess = 1;
        if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);

	guess++;  /* Increment the guess for the next recursion */
	return (_sqrt_recursion(n));  /* Recursively call _sqrt_recursion */
}
