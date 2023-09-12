#include <stdio.h>
#include <ctype.h>
int main(void) {
    char c;
    scanf("%c", &c);

    if (isalpha(c)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
