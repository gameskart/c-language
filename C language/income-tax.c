#include <stdio.h>
#include <conio.h>
int main()
{
    float salary, tax;
    printf("Enter total salary of yearly: ");
    scanf("%f", &salary);
    if (salary <= 25000)
    {
        printf("No Tax");
    }
    else if (salary >= 25000 && salary <= 500000)
    {
        tax = (salary * 5) / 100;
    }
    else if (salary > 500000 && salary <= 750000)
    {
        tax = (salary * 7.5) / 100;
    }
    else if (salary > 750000 && salary <= 1250000)
    {
        tax = (salary * 15) / 100;
    }
    else if (salary > 1250000)
    {
        tax = (salary * 18) / 100;
    }
    printf("\nThe tax is %.2f", tax);
    getch();
    return 0;
}