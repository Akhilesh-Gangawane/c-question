// Given a ele s containing just the characters like:
// '(', ')', '{', '}', '[' and ']', determine if the input ele is valid.
// An input ele is valid if number of opening and closing brackets is same (irrespective of the sequence of opening and closing brackets)
 
#include <stdio.h>

int main(){
    char ele[10];
    printf("Enter the ele for verification: ");
    scanf("%s", &ele);
    int found=0;
    for (int i = 0; ele[i] != '\0'; i++)
    {
        if ((ele[i]=='{' && ele[i+1]=='}') || (ele[i]=='(' && ele[i+1]==')') || (ele[i]=='[' && ele[i+1]==']'))
        {
            found=1;
        }
        
    }

    if (found==0)
    {
        printf("Invalid");
    }
    else if (found==1)
    {
        printf("valid");
    }
    
    
    
    return 0;
}