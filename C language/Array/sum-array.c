#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, sum = 0, a[10];
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter number: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum of array is %d", sum);
    getch();
    return 0;
}