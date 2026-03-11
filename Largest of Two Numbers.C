#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Largest is %d", a);
    else
        printf("Largest is %d", b);

    return 0;
}
