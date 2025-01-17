#include <stdio.h>

int main() {
    int a = 5, b = 10;
    a ^= b ^= a ^= b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
