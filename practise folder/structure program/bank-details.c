#include <stdio.h>
#include <conio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;
}s[10];
int main()
{
    printf("Enter the Roll_No: ");
    scanf("%d", &s->roll_no);

    printf("Enter the Name:  ");
    scanf("%s", &s->name);

    printf("Enter the Marks:  ");
    scanf("%f", &s->marks);

    printf("%d\n", s->roll_no);
    printf("%s\n", s->name);
    printf("%.2f\n", s->marks);

    getch();
    return 0;
}