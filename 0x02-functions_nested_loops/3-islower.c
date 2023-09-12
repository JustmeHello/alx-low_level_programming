#include <stdio.h>
#include <ctype.h>
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
    char c;

    
    scanf("%c", &c);

    if (islower(c)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
