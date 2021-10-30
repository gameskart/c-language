#include <stdio.h>
#include <conio.h>
struct bank_details
{
    char name[10];
    char bank_name[100];
};
int main()
{
    struct bank_details a;

    printf("Enter Name:  ");
    scanf("%s", &a.name);
    printf("Enter Bank_Name:  ");
    scanf("%s", &a.bank_name);

    printf("%s\n", a.name);
    printf("%s\n", a.bank_name);

    getch();
    return 0;
}