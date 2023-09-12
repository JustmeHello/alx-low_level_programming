#include <stdio.h>

int main(void) {
    long long int fib[3];
    long long int sum = 0;
    
    fib[0] = 1; 
    fib[1] = 1; 
    fib[2] = 0; 

    
    while (fib[1] <= 4000000) {
        if (fib[1] % 2 == 0) { 
            sum += fib[1]; 
        }
        fib[2] = fib[0] + fib[1]; 
        fib[0] = fib[1]; 
        fib[1] = fib[2];
    }

    
    printf("%lld\n", sum);

    return 0;
}

