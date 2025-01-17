#include <stdio.h>

int main() {
    int n, roll, found = 0;

    printf("How many students? ");
    scanf("%d", &n);

    printf("Enter roll numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &roll);
        if (roll == 20) {
            found = 1;
        }
    }

    if (found) {
        printf("Roll number 20 is here.\n");
    } else {
        printf("Roll number 20 is not here.\n");
    }

    return 0;
}
