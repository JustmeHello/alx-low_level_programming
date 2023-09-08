#include <stdio>
/**
 *
 *
 * main - Entry point
 *
 * Description: This is the main function of the program.
 * It prints the lowercase alphabet from 'a' to 'z'
 * followed by a newline character.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')

	{

	        putchar (letter);
	        letter++;
	}
	char Letter ='A';
	while (Letter <='Z')
	{
		putchar(Letter);
		Letter++;
	}

	putchar(\n);

	return(0);
}
