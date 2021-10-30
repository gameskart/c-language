#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], n, i, j, temp;
    printf("Enter how many times:  ");
    scanf("%d", &n);
    printf("The array is %d\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n / 2; i++)
    {
        for (j = n; j > 0; j--)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("The element of array is %d\n", a[i]);
    }
    getch();
    return 0;
}