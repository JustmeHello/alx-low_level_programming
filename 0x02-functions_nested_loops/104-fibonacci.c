#include <stdio.h>

int main(void) {
    int i;
    unsigned int a = 1, b = 1, next;

    printf("%u, %u", a, b);

    for (i = 3; i <= 98; i++) {
        next = a + b;
        printf(", %u", next);

        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}

