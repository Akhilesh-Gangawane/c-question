#include <stdio.h>

int realAdd(int, int);
int ImagAdd(int, int);
int realAdd(int m, int o){
    return m+o;
}
int ImagAdd(int n, int p){
    return n+p;
}

int main(){
    int a, b, x, y;
    printf("Enter the real number: ");
    scanf("%d", &a);
    printf("Enter the imaginary number: ");
    scanf("%d", &b);
    printf("Enter the second real number: ");
    scanf("%d", &x);
    printf("Enter the second imaginary number: ");
    scanf("%d", &y);
    printf("First complex number is %d + %di\n", a,b);
    printf("Second complex number is %d + %di\n", x,y);

    int c=realAdd(a,x);
    int w=ImagAdd(b,y);

    printf(" And their addition is %d + %di", c, w);

    return 0;
}