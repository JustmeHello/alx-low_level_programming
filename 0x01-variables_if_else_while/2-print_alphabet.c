#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function of the program. It prints the lowercase
 * alphabet from 'a' to 'z' followed by a newline character.
 *
 * Return: (0) Always 0 (Success)
 */
int main(void) {
    char letter = 'a'; // starting from 'a'

    while (letter <= 'z') {
        putchar(letter);
        letter++;
    }

    putchar('\n');

    return (0);
}
