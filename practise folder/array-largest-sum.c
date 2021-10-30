/* Write a C program to input n numbers in an array, calculate the sum of all even numbers and all
odd numbers in the array and print the larger sum.
 Example:
 If the array contains the following elements:
 2, 3, 3, 5, 4, 8, 7, 11, 2
 The sum of all even elements is 2+4+8+2=16
 Sum of all odd elements is 3+3+5+7+11=29
 Therefore, the output should be 29.*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i, n, Evensum = 0, Oddsum = 0;
    printf("Enter how many times: ");
    scanf("%d", &n);
    printf("Enter the number:  ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Even number is\t");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d\n", a[i]);
        }
    }
    printf("Odd number is\t");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d\n", a[i]);
        }
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            Evensum = Evensum + a[i];
        }
        else
        {
            Oddsum = Oddsum + a[i];
        }
    }
    printf("\n\nTotal of even number is = %d", Evensum);
    printf("\n\nTotal of odd number is = %d", Oddsum);

    for (i = 0; i < n; i++)
    {
        if (Evensum > Oddsum)
        {
            Oddsum = Evensum;
        }
    }
    printf("\n\nThe largest is %d", Oddsum);
    getch();
    return 0;
}
