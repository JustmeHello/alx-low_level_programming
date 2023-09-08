#include <stdio.h>

int main() {
    char letter = 'a'; /*starting from a*/

        while (letter <= 'z') {
        putchar(letter);
        letter++;
    }

    putchar('\n');

    return 0;
}
