#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number:");
    scanf("%d", &num);
    if (num>=1&&num<=100)
      printf("Valid");
    else 
      printf("Invalid");
      return 0; 
}