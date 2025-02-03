// Write a C program to calculate the sum of array elements using pointers as an argument.

#include <stdio.h>
int summation(int *, int);
int summation(int *arr, int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main(){
    int array[9]={1,2,3};
    int size= sizeof(array)/sizeof(array[0]);
    int sum= summation(array, size);
    printf("Ths sum of array is %d", sum);
    return 0;
}