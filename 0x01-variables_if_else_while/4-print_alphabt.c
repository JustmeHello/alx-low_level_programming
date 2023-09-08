#include <stdio.h>
/**
*
*main : print alphabets except e and q
*
*/

int main(void)
{
    char l; 

    for (l = 'a'; l <= 'z'; l++) 
    {
        if (l != 'e' && l != 'q') 
        {
            putchar(l);
        }
    }

    putchar('\n'); 

    return 0;
}
