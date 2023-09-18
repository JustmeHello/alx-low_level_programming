#include "main.h"

/**
*
* prints a string, followed by a new line
*/
void _puts(char *str) {
    while (*str != '\0') {
        putchar(*str);
        str++;
    }
    putchar('\n');
}
