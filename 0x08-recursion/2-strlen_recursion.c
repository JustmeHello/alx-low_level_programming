#include "main.h"

/**
 * _puts_recursion - Returns the length of a string.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
if (*str == '\0')
{
return 0;
}
else
{
return 1 + _puts_recursion(str + 1);
}
}
