#include<stdio.h>
int main() {
    int n, i;
    long long term = 0, sum = 0;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        term = term*10 + 1;
        sum += term;
    }
    printf("Sum = %lld", sum);
    return 0;
}