#include<stdio.h>
int main() {
    int a[10], n, i, j, count, visited[10]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        if(visited[i]) continue;
        count = 1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]) { count++; visited[j]=1; }
        }
        printf("%d -> %d times\n", a[i], count);
    }
    return 0;
}