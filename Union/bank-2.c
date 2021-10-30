#include <stdio.h>
#include <conio.h>
union bank_details
{
    char name[10];
    char bank_name[5];
};
int main()
{
    union bank_details a;

    printf("Enter Name:  ");
    scanf("%s", &a.name);
    printf("Enter Bank_Name:  ");
    scanf("%s", &a.bank_name);

    printf("%s\n", a.name);
    printf("%s\n", a.bank_name);

    getch();
    return 0;
}