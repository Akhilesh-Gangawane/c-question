#include <stdio.h>
#include <math.h>
int numlen(int);
int numlen(int x)
{
    int length = 0;
    while (x > 0)
    {
        length++;
        x = x / 10;
    }
    return length;
}

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int original = number;
    int digit, sum = 0;
    int length = numlen(number);
    while (number > 0)
    {
        digit = number % 10;
        sum = sum + round(pow(digit, length));
        number = number / 10;
    }

    if (sum == original)
    {
        printf("it is a armstrong number.");
    }
    else
    {
        printf("It is not a armstong number.");
    }

    return 0;
}