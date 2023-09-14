#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: turn num to _ 
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
    int i;
    
    scanf("%d", &i);

    while (i > 0)
    {
        putchar('_');
        i--;
    }

    putchar('\n');
    
    return 0;
}

