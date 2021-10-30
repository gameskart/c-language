#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], n, i, key;
    printf("Enter how many times:  ");
    scanf("%d", &n);
    printf("Enter number:  ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter key value for search:  ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            for (i = i + 1; i < n; i++)
            {
                a[i - 1] = a[i];
                n--;
                break;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("The Deleted Element is a[%d] is %d\n", i, a[i]);
    }
    getch();
    return 0;
}