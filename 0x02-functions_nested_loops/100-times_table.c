#include <stdio.h>

void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return;  
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            int result = i * j;
            if (j == 0) {
                printf("%d", result);
            } else {
                printf(", %d", result);
            }
        }
        printf("\n");
    }
}

int main(void) {
    int n;
    printf("Enter a number (0-15): ");
    scanf("%d", &n);
    print_times_table(n);
    return 0;
}

