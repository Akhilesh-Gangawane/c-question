// Write a C program to count the number of Vowels and Consonants.
#include <stdio.h>
#include <string.h>
int main(){
    char arr[100];
    printf("Enter the string: ");
    gets(arr);
    int length=strlen(arr);
    int vowels=0;
    int consonants=0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' || arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U')
        {
            vowels++;            
        }
       
        else if((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z'))
        {
            consonants++;
        }
        
    }

    printf("The number of vowels = %d \nNumber of consonants = %d", vowels, consonants);
    
    return 0;
}