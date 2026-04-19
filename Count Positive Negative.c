#include<stdio.h>
int main() {
    int arr[5], i, pos = 0, neg = 0;

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] >= 0) pos++;
        else neg++;
    }

    printf("Positive=%d Negative=%d", pos, neg);
    return 0;
}