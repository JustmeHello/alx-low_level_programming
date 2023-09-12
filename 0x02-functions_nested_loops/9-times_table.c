#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void) {
    int rows = 10;
    int cols = 10;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int result = i * j;
            printf("%2d", result);
            if (j < cols - 1) {
                printf(", ");
            }
        }
        printf("$\n");
    }

    return 0;
}
