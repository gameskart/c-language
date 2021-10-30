// WAP to accept 20 no’s in an array and list even no’s and odd no’s separately with the count
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[20], i;
    printf("\nPlease Enter the Array Elements\n");
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 20; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("Even number = %d\n\n", a[i]);
        }
        else
        {
            printf("Odd number = %d\n\n", a[i]);
        }
    }
    getch();
    return 0;
}