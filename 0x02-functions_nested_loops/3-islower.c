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
int _islower(int c) {
    if (islower(c))
        return 1;
    else
        return 0;
}

int main(void) {
    char ch = 'a';  // You can change 'a' to any character you want to check
    int result = _islower(ch);

    if (result == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
