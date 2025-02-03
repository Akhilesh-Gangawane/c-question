#include <stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int digit, sum=0;
    int original=number;
    while (number>0)
    {
        digit=number%10;
        sum=sum+(digit*digit*digit);
        number=number/10;
    }
    if (original==sum)
    {
        printf("It is a armstrong number");
    }
    else
    {
        printf("It is not a armstrong number");
    }
    
    
    return 0;
}