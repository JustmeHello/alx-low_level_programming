#include <stdio.h>

int main(void) 
{
    int n;

    for (n = 0; n < 10; n++) 
    {
        putchar('0' + n); // Print the character representation of the number
    }

    putchar('\n');

    return 0; // Removed parentheses around the return value
}
