#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function of the program.
 * It prints the lowercase alphabet from 'a' to 'z'
 * followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void) {
int rows = 10; 

for (int i = 0; i < rows; i++) {
for (char letter = 'a'; letter <= 'z'; letter++) {
putchar(letter);
}
putchar('\n');
}

return 0;
}
