#include <stdio.h>
#include <conio.h>
struct bank_details
{
    char name[50];
    char bank_name[20];
    int account_no;
    float balance;
};
struct student
{
    int roll_no;
    char name[10];
    float marks;
};
int main()
{
    struct bank_details a;
    struct student s;
    printf("-----------------------------");
    printf("\nEnter Name:  ");
    scanf("%s", &a.name);
    printf("\nEnter Bank_Name:  ");
    scanf("%s", &a.bank_name);
    printf("\nEnter Account_No:  ");
    scanf("%d", &a.account_no);
    printf("\nEnter Bank Balance:  ");
    scanf("%f", &a.balance);
    printf("-----------------------------");    

    printf("%s\n", a.name);
    printf("%s\n", a.bank_name);
    printf("%d\n", a.account_no);
    printf("%.2f\n", a.balance);

    printf("******************************");
    printf("\nEnter the roll_no:\n ");
    scanf("%d", &s.roll_no);
    printf("Enter the student name:\n ");
    scanf("%s", &s.name);
    printf("Enter the marks:\n  ");
    scanf("%f", &s.marks);
    printf("******************************");

    printf("The Roll_No of student is %d\n", s.roll_no);
    printf("The name of student is %s\n", s.name);
    printf("The Marks of student is %.2f\n", s.marks);
    getch();
    return 0;
}