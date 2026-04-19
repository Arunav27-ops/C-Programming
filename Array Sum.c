#include <stdio.h>

int main() {
    int marks[5] = {80, 90, 75, 85, 95};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }

    printf("Sum     = %d\n", sum);
    printf("Average = %.2f\n", sum / 5.0);

    return 0;
}