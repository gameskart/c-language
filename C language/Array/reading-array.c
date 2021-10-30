#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i, n;
    printf("Enter how many element:  ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("The element at index no a[%d] is %d\n", i, a[i]);
    }
    getch();
    return 0;
}