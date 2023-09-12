#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: It prints the lowercase alphabet from 'a' to 'z'
 * 
 * 
 *
 * Return: Always 0 (Success)
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
