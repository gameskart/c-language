// 25.	 WAP to print addition of 2 one D array elements
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], b[10], sum[20], i, n;
    printf("Enter how many times the array : ");
    scanf("%d", &n);
    printf("Enter the value for first array:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the value for second array:\n");
    for (i = 0; i < n; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    printf("\nThe Sum is = ");
    for (i = 0; i < n; i++)
    {
        sum[i] = a[i] + b[i];
        printf("%d\n", sum[i]);
    }
    getch();
    return 0;
}