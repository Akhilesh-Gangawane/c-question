// Write a C program to find the sum of Natural Number/Factorial of Number of all natural numbers from 1 to N.
// Series: 1/1! + 2/2! + 3/3! + 4/4! + ... N/N!

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return factorial(n - 1) * n;
}

int main() {
    int number;
    float sum = 0.0;

    printf("Enter the number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        sum += (float)i / factorial(i);
    }

    printf("Sum of the series is: %f\n", sum);
    return 0;
}
