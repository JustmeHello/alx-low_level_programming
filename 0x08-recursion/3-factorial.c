#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to find the length of.
 *
 * Return: The length of the string.
 */
int factorial(int n)
{
  if (n < 0)
    return (-1);
  else if (n == 0)
    return (1);
  return (n*factorial(n-1));
}
