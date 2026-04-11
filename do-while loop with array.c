#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int i = 0;

    do {
        printf("arr[%d] = %d\n", i, arr[i]);
        i++;
    } while (i < 5);

    return 0;
}