#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 *
 * 
 *
 * Return: The natural square root of n, or -1 if n doesnt have a square root.
 */
int _sqrt_recursion(int n)
{
  int guess == 1; 
	if (guess * guess == n)
        return guess;
  if (guess * guess > n)
        return -1;
  return sqrt_helper(n, guess + 1);
}
