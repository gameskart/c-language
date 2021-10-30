#include <stdio.h>
#include <conio.h>
struct bank_details
{
    char name[50];
    char bank_name[20];
    int account_no;
    float balance;
};
struct bank_details read()
// struct bank_details read()
{

    struct bank_details a;    
    printf("Enter Name:  ");
    scanf("%s",&a.name);
    printf("Enter Bank_Name:  ");
    scanf("%s",&a.bank_name);
    printf("Enter Account_No:  ");
    scanf("%d",&a.account_no);
    printf("Enter Bank Balance:  ");
    scanf("%f",&a.balance);
    return a;
}
int main()
{
    struct bank_details a;

    a=read();
    printf("%s\n",a.name);
    printf("%s\n",a.bank_name);
    printf("%d\n",a.account_no);
    printf("%f\n",a.balance);

    getch();
    return 0;
}