#include<stdio.h>
int isPrime(int x){
    if(x<=1) return 0;
    for(int i=2;i<=x/2;i++)
        if(x%i==0) return 0;
    return 1;
}
int main(){
    int a[5], i, count=0;
    for(i=0;i<5;i++) scanf("%d",&a[i]);

    for(i=0;i<5;i++)
        if(isPrime(a[i])) count++;

    printf("Prime count = %d", count);
    return 0;
}