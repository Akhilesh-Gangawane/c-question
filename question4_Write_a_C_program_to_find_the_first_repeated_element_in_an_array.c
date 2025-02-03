#include <stdio.h>

int main(){
    int array[10]={1,4,4,6,8,5};
    int size = sizeof(array)/sizeof(array[0]);
    int duplicate=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[i]==array[j])
            {
                printf("%d\n", array[i]);
                duplicate=1;
            }
            
        }
        if (duplicate)
        {
            break;
        }
        
    }
    
    return 0;
}