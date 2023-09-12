#include <stdio.h>
#include <ctype.h>
int main(void) {
    int i;
    scanf("%d", &i);

    if (i>0) {
        printf("+\n");
        return 1;
    } else if(i<0){
        printf("-\n");
        return -1;
    } else {
        printf("0\n");
        return 0;
    }

    return 0;
}
