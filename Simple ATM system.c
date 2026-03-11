#include <stdio.h>
int main(){
    float balance, withdraw;
    printf("Enter Balance:");
    scanf ("%f",&balance);

    printf("Enter withdrawal amount:");
    scanf("%f",&withdraw);
    if(withdraw<= balance)
    printf("Transaction Successfull");

    else printf("Insufficient Balance");
    return 0
}