#include<stduio.h>
int main () {
    int a,b,c, largest ;
    printf("Enter three numbers:");
    scanf("%d %d %d", &a ,&b, &c);
    if (a>b){
        if (a>c)
        largest = a;
        else
        largest=c;
    }
    else {
        if (b>c)
        largest = b;
        else
        largest=c;
    }
    
    printf("Largest number is %d", largest);
    return 0;   
}