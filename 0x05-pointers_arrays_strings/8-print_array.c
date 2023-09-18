#include "main.h"

void print_array(int *a, int n)
{
    int i; 

    if (n <= 0) {
        printf("\n");
        return;
    }

    printf("%d", a[0]); // Print the first element

    for (i = 1; i < n; i++) {
        printf(", %d", a[i]); // Print the remaining elements with a comma and space
    }

    printf("\n"); // Print a new line at the end
}
