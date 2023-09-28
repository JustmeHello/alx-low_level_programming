#include "main.h"

/**
 * is_prime_recursive - Checks if an integer is a prime number recursively.
 * @n: The integer to check.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	/* If n is less than or equal to 1, it's not prime */
	if (n <= 1)
		return (0);

	/* If divisor reaches 1, n is prime */
	if (divisor == 1)
		return (1);

	/* If n is divisible by divisor, it's not prime */
	if (n % divisor == 0)
		return (0);

	/* Recursively check the next divisor */
	return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* Start the recursive function with divisor n - 1 */
	return (is_prime_recursive(n, n - 1));
}
