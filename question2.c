#include <stdio.h>
int strlenght(char[]);
int strlenght(char arr[])
{
    int count = 0, i = 0;
    do
    {
        count++;
        i++;
    } while (arr[i] != '\0');
    return count;
}
int main()
{
    char bytes[9];
    printf("Enter the 8-bit binary number: ");
    scanf("%s", bytes);
    int lenght = strlenght(bytes);
    if (lenght != 8 || lenght<2 )
    {
        printf("Invalid Input");
        return 1;
    }

    else
    {
        for (int i = 2; i < 8; i++)
        {
            if (bytes[i] != '1' && bytes[i] != '0')
            {
                printf("Invalid Bits");
                break;
            }
            else
            {
                printf("%c ", bytes[i]);
            }
        }
    }

    return 0;
}