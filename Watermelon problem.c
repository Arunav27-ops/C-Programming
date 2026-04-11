#include <stdio.h>

int main () {
    int weight;
    printf("Enter the weight of Watermelon:");
    scanf("%d", &weight);
    if (weight > 2 && weight%2==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}

