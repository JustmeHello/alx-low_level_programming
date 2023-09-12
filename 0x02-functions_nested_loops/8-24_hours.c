#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void) {
    int h;
    int m;
    
    for (h = 0; h <= 23; h++) {
        for (m = 0; m <= 59; m++) {
            printf("%02d:%02d\n", h, m);  
        }
    }
    
    return 0;
}

