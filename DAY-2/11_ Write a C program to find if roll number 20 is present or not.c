#include <stdio.h>

int main() {
    int n, rollNumber, found = 0;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    printf("Enter the roll numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &rollNumber);
        if (rollNumber == 20) {
            found = 1;
        }
    }

    if (found) {
        printf("Roll number 20 is present.\n");
    } else {
        printf("Roll number 20 is not present.\n");
    }

    return 0;
}
