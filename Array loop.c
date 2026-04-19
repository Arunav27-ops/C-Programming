#include <stdio.h>

int main() {
    int marks[5];

    // Input
    for (int i = 0; i < 5; i++) {
        printf("Enter marks[%d]: ", i);
        scanf("%d", &marks[i]);
    }

    // Output
    printf("\nAll marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("marks[%d] = %d\n", i, marks[i]);
    }

    return 0;
}