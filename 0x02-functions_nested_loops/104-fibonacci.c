#include <stdio.h>

int main(void) {
    unsigned int a = 1, b = 2;
    printf("%u, %u, ", a, b);

    for (int i = 3; i <= 98; i++) {
        unsigned int next = a + b;
        printf("%u", next);

        if (i < 98) {
            printf(", ");
        }

        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
