#include <stdio.h>

int main() {
    int arr[5];

    // Input
    for (int i = 0; i < 5; i++) {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Output
    printf("\nArray values:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}