#include<stdio.h>
     int main(){
    float salary; 
    int years;
printf("Enter employee's salary:");
scanf("%f",&salary);
printf("Enter years of service:")   ;
scanf("%d",&years);
if(salary>2000 && years>5)
printf("Eligible For Bonus");
else
printf("Not Eligible For Bonus");
return 0;   
}