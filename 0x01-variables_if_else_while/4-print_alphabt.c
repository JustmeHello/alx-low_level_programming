#include <stdio.h>
/**
*
*main : print alphabets except e and q
*
*/

int main(void)
{
    char l; // Declare the variable 'l'

    for (l = 'a'; l <= 'z'; l++) // Use ';' to separate initialization, condition, and increment
    {
        if (l != 'e' && l != 'q') // Use '!=' to compare, not '|'
        {
            putchar(l);
        }
    }

    putchar('\n'); // Use '\n' for a newline character

    return 0;
}
