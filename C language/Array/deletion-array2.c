#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], n, i, j, p;
    printf("How many No of times: ");
    scanf("%d", &n);
    printf("Enter values: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the position: ");
    scanf("%d", &p);
    j = p;
    while (j < n)
    {
        a[j - 1] = a[j];
        j++;
    }
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d\n", &a[i]);
    }
    getch();
    return 0;
}