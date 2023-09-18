#include "main.h"

void print_array(int *a, int n)
{
    int i; 

    if (n <= 0) {
        printf("\n");
        return;
    }

    printf("%d", a[0]); 

    for (i = 1; i < n; i++) {
        printf(", %d", a[i]);  
    }

    printf("\n");
}
