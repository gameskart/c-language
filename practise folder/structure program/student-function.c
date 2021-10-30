#include <stdio.h>
#include <conio.h>
struct student
{
    int roll_no[20];
    char name[20];
    char state[30];
    float marks;
};

struct student read()
{
    struct student a;
    scanf("%d", &a.roll_no);
    scanf("%s", a.name);
    scanf("%s", a.state);
    scanf("%f", &a.marks);
    return a;
}
// printf("");
int main()
{
    struct student a;
    printf("Enter the student roll_no: ");
    a=read();
    printf("Enter the student name: ");
    a=read(a);

    printf("Enter the student state: ");
    a=read();

    printf("Enter the student marks: ");
    a=read();

    printf("%d\n", a.roll_no);
    printf("%s\n", a.name);
    printf("%s\n", a.state);
    printf("%.2f\n", a.marks);
    getch();
    return 0;
}