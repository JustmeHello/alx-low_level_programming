#include "100-operations.h"

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    if (b == 0) {
        return 0;  // Handle division by zero
    }
    return a / b;
}

int mod(int a, int b) {
    if (b == 0) {
        return 0;  // Handle modulo by zero
    }
    return a % b;
}

