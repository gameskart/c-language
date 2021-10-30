// 11.	 A CLOTH SHOWROOM HAS ANNOUNCED THE FOLLOWING SEASONAL DISCOUNTS ON THE PURCHASE OF ITEMS-

#include <stdio.h>
#include <conio.h>
int main()
{
    int amount;
    float discount;
    printf("Enter amount for purchase of MILL CLOTHS:  ");
    scanf("%d", &amount);
    printf("Enter amount for purchase of HANDLOOM CLOTHS:  ");
    scanf("%d", &amount);
    if (amount <= 100)
    {
        printf("There is no Discount on MILL CLOTH\n");

        discount = (amount * 5.00) / 100;
        printf("The discount on HANDLOOM CLOTH is %.2f\n", discount);
    }
    else if (amount <= 200)
    {
        discount = (amount * 5.00) / 100;
        printf("The discount on MILL CLOTH is %.2f\n", discount);

        discount = (amount * 7.50) / 100;
        printf("The discount on HANDLOOM CLOTH is %.2f\n", discount);
    }
    else if (amount < 300)
    {
        discount = (amount * 7.50) / 100;
        printf("The discount on MILL CLOTH is %.2f\n", discount);

        discount = (amount * 10.00) / 100;
        printf("The discount on HANDLOOM CLOTH is %.2f\n", discount);
    }
    else if (amount >= 300)
    {
        discount = (amount * 10.00) / 100;
        printf("The discount on MILL CLOTH is %.2f\n", discount);

        discount = (amount * 15.00) / 100;
        printf("The discount on HANDLOOM CLOTH is %.2f\n", discount);
    }
    getch();
    return 0;
}