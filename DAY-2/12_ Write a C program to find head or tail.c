#include <studio.h>

int main() {
    int toss;
    printf("Enter 0 for Head or 1 for Tail: ");
    scanf("%d", &toss);

    if (toss == 0) {
        printf("Head\n");
    } else if (toss == 1) {
        printf("Tail\n");
    } else {
        printf("Invalid input. Enter 0 or 1 only.\n");
    }

    return 0;
}
