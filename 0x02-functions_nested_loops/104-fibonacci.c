#include <stdio.h>

int main(void) {
    unsigned long long a = 1, b = 2;
    printf("%llu, %llu, ", a, b);

    for (int i = 3; i <= 98; i++) {
        unsigned long long next = a + b;
        printf("%llu", next);

        if (i < 98) {
            printf(", ");
        }

        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
