#include <stdio.h>

int main() {
    char letter = 'a'; // Start with the letter 'a'

    // Loop through the alphabet and print each letter
    while (letter <= 'z') {
        putchar(letter);
        letter++;
    }

    // Print a newline character to move to the next line
    putchar('\n');

    return 0;
}
