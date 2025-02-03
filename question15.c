// 1.	Write a C program to create a new array from a given array with the elements divisible by a specific number.
#include <stdio.h>

int main()
{
    int arr[100];
    int arr_div[100];
    int n;
    printf("Enter the elements you want to enter: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element no. %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int check;
    printf("Enter the number for which you have to check the divisiblity: ");
    scanf("%d", &check);
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%check==0)
        {
            check=arr[i];
            printf("%d\n", check);
        }
        
    }
    
    
    return 0;
}
