#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], n, i, key, flag;
    printf("Enter how many times:   ");
    scanf("%d", &n);
    printf("Enter number in array:  ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter a number for searching:  ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("\nValue is found\n");
    else
        printf("Value is not found");
    getch();
    return 0;
}