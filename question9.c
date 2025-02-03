// Write a C program to copy vowels of one string to another and count copied characters.
#include <stdio.h>
#include <string.h>

int main(){
    char string[10];
    char string2[10];
    printf("Enter the string: ");
    scanf("%s", string);
    int length = strlen(string);
    strcpy(string2, string);
    printf("%s\n", string2);
    printf("%d", length);
    
    return 0;
}