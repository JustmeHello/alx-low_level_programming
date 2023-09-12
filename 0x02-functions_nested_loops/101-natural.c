#include <stdio.h>
#include <math.h>
int a;
int sum = 0;
int main() {
    for (a=1; a <= 1024; a++)
        if ( a % 3 == 0 || a % 5 == 0)
        sum += a;
        printf("%d\n",sum);
    return 0;
}

