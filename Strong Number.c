#include<stdio.h>
int fact(int x){
    int f=1, i;
    for(i=1;i<=x;i++) f*=i;
    return f;
}
int main() {
    int n, temp, sum=0;
    scanf("%d",&n);
    temp = n;

    while(n){
        sum += fact(n%10);
        n /= 10;
    }

    if(sum == temp) printf("Strong");
    else printf("Not Strong");
    return 0;
}