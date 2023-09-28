#include "main.h"

int is_palindrome_recursive(char *s, int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (s[start] == s[end]) {
        return is_palindrome_recursive(s, start + 1, end - 1);
    } else {
        return 0;
    }
}

int is_palindrome(char *s) {
    int length = strlen(s);
    return is_palindrome_recursive(s, 0, length - 1);
}
