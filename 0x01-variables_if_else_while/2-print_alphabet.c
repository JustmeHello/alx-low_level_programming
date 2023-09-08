#include <stdio.h>
/**
*
*main : print alphabets a to z
*
*/
int main(void) {
    char letter = 'a'; /*starting from a*/

        while (letter <= 'z') {
        putchar(letter);
        letter++;
    }

    putchar('\n');

    return (0);
}
