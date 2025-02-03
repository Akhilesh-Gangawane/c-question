// Implement structures to read, write, and compute average marks and the students scoring 
// above and below the average marks for a class of N students

#include <stdio.h>
struct student
{
    char name[20];
    int marks;
} s[10];

int main()
{
    int number_of_student;
    printf("Enter the number of students: ");
    scanf("%d", &number_of_student);
    for (int i = 0; i < number_of_student; i++)
    {
        printf("Enter the name of student: ");
        scanf("%s", s[i].name);
        printf("Enter the marks of student: ");
        scanf("%d", &s[i].marks);
    }

    int avg_marks = 0;
    int sum = 0;

    for (int i = 0; i < number_of_student; i++)
    {
        sum = sum + s[i].marks;
    }
    avg_marks = sum / (number_of_student);
    printf("%d is the average marks.\n", avg_marks);

    for (int i = 0; i < number_of_student; i++)
    {
        if (s[i].marks > avg_marks)
        {
            printf("%s got above avgerage marks.\n", s[i].name);
        }
        else if (s[i].marks < avg_marks)
        {
            printf("%s got less then average marks.", s[i].name);
        }
    }

    return 0;
}