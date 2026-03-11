\\Temperature conversion from Celsius to Fahrenheit
#include <stdio.h>
int main() 
{
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Temperature in Fahrenheit: %.2f",f);
    return 0;   
}

\\Temperature conversion from Fahrenheit to Celsius
#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter temperature in fahrenheit:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Temperature in Celsius: %.2f",c);
    return 0;
} 