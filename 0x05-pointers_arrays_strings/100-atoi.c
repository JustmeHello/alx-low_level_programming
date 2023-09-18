#include "main.h"



int _atoi(const char *str) {
    int result = 0;
    int sign = 1; 

    
    if (*str == '-') {
        sign = -1;
        str++;
    }

   
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
            result = result * 10 + (*str - '0');
        } else {
            
            printf("Invalid character in the string: %c\n", *str);
            return 0; 
        }
        str++;
    }

    
    return result * sign;
}
