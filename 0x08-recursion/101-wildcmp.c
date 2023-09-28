#include "main.h"


int wildcmp(char *s1, char *s2) {
    if (*s1 == '\0' && (*s2 == '\0' || *s2 == '*')) {
        return 1;
    }

    if (*s2 == '*' || (*s1 == *s2 && *s1 != '\0')) {
        return (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1, s2 + 1));
    }

    return 0;
}
