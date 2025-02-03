// Counting number of 1's using C program (First convert decimal number to binary and count number of 1’s)

#include <stdio.h>

int number_of_one_checker(int);
int number_of_one_checker(int n){
    int count = 0;
    while (n>0)
    {
        if (n%2==1)
        {
            count++;
        }
        n=n/2;
    }
    
    return count;
}

int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("The number of one when this number is converted to binary is: %d", number_of_one_checker(number));
    return 0;
}