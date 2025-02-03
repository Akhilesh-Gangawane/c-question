#include <stdio.h>

int main(){
    int date;
    printf("Enter date: ");
    scanf("%d", &date);
    int month;
    printf("Enter month: ");
    scanf("%d", &month);
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    
    int add;
    printf("Enter the number of days you want to add: ");
    scanf("%d", &add);

     date= date+add;

    if (month==1 || month==3 || month==5|| month==7 || month==8 || month==10 || month==12)
    {
        date=1;   
    }
    

    return 0;
}