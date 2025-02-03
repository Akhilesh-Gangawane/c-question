// Write a C program to print addition of alternate elements of the array.

#include <stdio.h>

int main(){
    int array[10]={1,2,3,4,5,6,7,8,9};
    int length=sizeof(array)/sizeof(array[0]);
    int sum=0;
    for (int i = 0; i < length; i++)
    {
        if (i%2==0)
        {
            sum += array[i];
        }
        
    }
    printf("%d", sum);
    return 0;
}