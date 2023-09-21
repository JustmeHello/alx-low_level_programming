#include "main.h"

char *leet(char *str) {
    char leetReplace[] = "aAeEoOtTlL";
    char leetWith[] = "4433007711";
    
    for (int i = 0; str[i]; i++) {
        for (int j = 0; leetReplace[j]; j++) {
            if (str[i] == leetReplace[j]) {
                str[i] = leetWith[j];
                break;  
            }
        }
    }
    
    return str;
}
