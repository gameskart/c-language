#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], n, i, j, temp;
    printf("Enter how many times:  ");
    scanf("%d", &n);
    printf("Enter number:  ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    // 12 
    for (i = 0; i < n; i++)
    {
        printf("The Element of array is a[%d] = %d\n", i, a[i]);
    }
    getch();
    return 0;
}