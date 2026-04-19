#include<stdio.h>
int main() {
    int a[5], i, max, second;
    for(i=0;i<5;i++) scanf("%d",&a[i]);

    max = second = -2147483648; // INT_MIN
    for(i=0;i<5;i++){
        if(a[i] > max){
            second = max;
            max = a[i];
        } else if(a[i] > second && a[i] != max){
            second = a[i];
        }
    }
    printf("Second largest = %d", second);
    return 0;
}