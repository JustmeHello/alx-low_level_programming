#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: The string to print.
 */
void puts_half(char *str)
{
  int length = 0;
  int i = 0;
        while (*str != '\0'){
                        length ++;
                        str++;
        if (length % 2 == 0)
           i = length/2;
           putchar(str[i]);
		       i++;
        else 
           i = (length-1)/2;
           i++;
        }	
	putchar('\n');
}
