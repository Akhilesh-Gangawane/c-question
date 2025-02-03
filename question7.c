#include <stdio.h>

int main(){
    int num[]={1,2,3,4,7,8,9,10};
    int n=(sizeof(num)/sizeof(num[0]))+1;
    int ex_sum = n*(n+1)/2;
    int sum=0;
    for (int i = 0; i < n-1; i++)
    {
        sum += num[i];
    }

    int missing = ex_sum - sum;
    printf("Missing element = %d", missing);
    return 0;
}