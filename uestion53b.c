// 2.	Write a program to print prime numbers between two numbers given by user.
#include <stdio.h>

int main(){
    int first_num, second_num;
    printf("Enter the first number: ");
    scanf("%d", &first_num);
    printf("Enter the second number: ");
    scanf("%d", &second_num);

    for (int num = first_num; num < second_num; num++)
    {
        int is_prime=1;
        if (num<=1)
        {
            is_prime=0;
        }
        else
        {
            for (int i = 2; i < num; i++)
            {
                if (num%i==0)
                {
                    is_prime=0;
                }
                
            }
            
        }
        if (is_prime)
        {
            printf("%d\n", num);
        }
        
    }
    
    return 0;
}
