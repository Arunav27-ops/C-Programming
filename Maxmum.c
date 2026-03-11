/* This code takes three numbers as input and compares them to find the maximum number among them.
It uses if-else statements to determine which number is the greatest and then prints the result */


#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b && a>=c)
    {
        printf("Maximun number is %d",a);
    }
    else if (b>=a && b>=c)
    {
        printf("maximun number is %d",b);
    }
    
    else
    {
        printf("Maximun number is %d",c);

    }
return 0;
}

/* This code takes three numbers as input and compares them to find the minimum number among them.
It uses if-else statements to determine which number is the smallest and then prints the result */


#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if(a<=b && a<=c)
    {
        printf("Minimun number is %d",a);
    
    }
    else if (b<=a && b<=c)
    {
        printf("Minmun number is %d",b);

    }
    else
    {
        printf("Minimun number is %d",c);
    
    }
     return 0;


}