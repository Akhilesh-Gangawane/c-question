#include <stdio.h>

int ArrLen(char a[100]){
    int count=0;
    int i=0;
    do
    {
        count++;
        i++;
    } while (a[i] != '\0');
    
    return count;
}

void ReverseString(char str1[], char str2[]){
    int n= ArrLen(str1);
    for (int i = 0; i < n; i++)
    {
        str2[i]=str1[n-i-1];
    }
    str2[n]='\0';
    
}

int Palindrome(char str1[], char str2[]){
    int i=0;
    while (str1[i] != str2[i] )
    {
        i++;
        return 0;
    }
    return 1;
    
}

int main(){
    char arr1[100], arr2[100];
    printf("Enter the string: ");
    scanf("%s", arr1);
    ReverseString(arr1, arr2);
    
    if (Palindrome(arr1, arr2))
    {
        printf("The entered string is a palindrome");
    }
    else{
        printf("The string is not a palindrome");
    }

    return 0;
}