#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 15;
    printf("Largest: %d\n", (a > b && a > c) ? a : (b > c ? b : c));
    return 0;
}
