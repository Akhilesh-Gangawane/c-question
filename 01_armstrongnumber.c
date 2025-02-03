#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    char a[100];
    printf("Enter the digit: ");
    scanf("%s", a);
    int digit=0;
    int num=0;
    
    for (int i = 0; a[i] != '\0'; i++)
    {
        int digit=a[i]-'0';
        // int num=0;
        num=num+(digit*digit*digit);
        
    }
    
    int arms= atoi(a);
    
    if (arms!=num)
    {
        printf("The number is not armstrong number.");
    }
    else
    {
        printf("The number is an armstrong number.");
    }
         
    return 0;
}