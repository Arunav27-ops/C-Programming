#include <stdio.h>
int main (){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if(num%2==0 && num%5==0)
printf("This is a special Number");
else
printf("Normal Number");

return 0;

}