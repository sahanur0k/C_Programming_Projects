#include <stdio.h>

int main() {
    int a = 5, b = 10;
    a = a * b; // Step 1
    b = a / b; // Step 2
    a = a / b; // Step 3
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
