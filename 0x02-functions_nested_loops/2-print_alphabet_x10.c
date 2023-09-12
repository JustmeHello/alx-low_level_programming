#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet from 'a' to 'z'
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n');
}
