#include <stdio.h>

int main() {
    int marks[5] = {80, 90, 75, 85, 95};
    int max = marks[0];
    int min = marks[0];

    for (int i = 1; i < 5; i++) {
        if (marks[i] > max) max = marks[i];
        if (marks[i] < min) min = marks[i];
    }

    printf("Largest  = %d\n", max);   // 95
    printf("Smallest = %d\n", min);   // 75

    return 0;
}