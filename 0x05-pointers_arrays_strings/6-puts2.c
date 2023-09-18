#include "main.h"

/**
 * prints every other character of a string
 * starting with the first character
 * followed by a new line.
 */
void puts2(char *str)
{
    while (*str)
    {
        putchar((int)*str);
        str = str + 2;
    }
    putchar('\n');
}
