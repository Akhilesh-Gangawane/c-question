// Given a string, S , consisting of alphabets and digits, 
// find the number of alphabets and digits in the given string.

#include <stdio.h>
int Arrlen(char []);
int Arrlen(char arr[]){
    int i=0;
    int count=0;
    while (arr[i])
    {
        count++;
        i++;
    }
    return count;
    
}
int main(){
    char arr[100];
    printf("Enter the string: ");
    scanf("%s", arr);
    int alphabet=0,number=0;
    int length = Arrlen(arr);
    for (int i = 0; i < length; i++)
    {
        if ((arr[i]>='a' && arr[i]<='z') || (arr[i]>='A' && arr[i]<='Z'))
        {
            alphabet++;
        }
        else if (arr[i]>='0' && arr[i]<='9')
        {
            number++;
        }
        
        
    }
    printf("%d alphabet\n", alphabet);
    printf("%d digit", number);
    return 0;
}