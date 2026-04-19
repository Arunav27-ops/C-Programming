#include<stdio.h>
int main(){
    int a[6], i, sum=0;
    for(i=0;i<6;i++) scanf("%d",&a[i]);

    for(i=0;i<6;i+=2)
        sum += a[i];

    printf("Sum = %d", sum);
    return 0;
}