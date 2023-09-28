#include "main.h"

/**
 * factorial -  returns the value of x raised to the power of y.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of the number, or -1 if n is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y <= 0)
		return (-1);
	
	return ((x^(y-1))* x);
}
