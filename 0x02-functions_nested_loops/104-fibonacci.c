#include <stdio.h>

int main(void) {
    unsigned long a = 1, b = 2, next;
    
    printf("%lu, %lu, ", a, b);
    
    for (int i = 3; i <= 98; i++) {
        next = a + b;
        printf("%lu", next);
        if (i < 98) {
            printf(", ");
        } else {
            printf("\n");
        }
        a = b;
        b = next;
    }
    
    return 0;
}
