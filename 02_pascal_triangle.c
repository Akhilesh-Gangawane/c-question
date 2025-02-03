#include <stdio.h>

void printPascal(int n) {
    for (int line = 0; line < n; line++) {
        int value = 1; 
        for (int i = 0; i <= line; i++) {
            printf("%d ", value);
            value = value * (line - i) / (i + 1); 
        }
        printf("\n"); 
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printPascal(n);
    return 0;
}
