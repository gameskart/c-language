// Write a C program to sort an array of integers using bubble sort

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], n, i, j, temp;
    printf("Enter how many times the array:  ");
    scanf("%d", &n);
    printf("Enter the number:  ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (a[j] < a[i + 1])
            {
                temp = a[j];
                a[j] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    getch();
    return 0;
}