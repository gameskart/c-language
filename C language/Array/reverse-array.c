#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i, n, j, temp;
    printf("Enter number of element:  ");
    scanf("%d", &n);
    printf("Enter numbers:  ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("The Element of Array is a[%d]=%d\n", i, a[i]);
    }
    getch();
    return 0;
}