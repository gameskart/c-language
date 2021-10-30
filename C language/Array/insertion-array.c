#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], n, i, j, key, value;
    printf("Enter how many times:  ");
    scanf("%d", &n);
    printf("Enter numbers:  ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("\nEnter key value for search:  ");
    scanf("%d", &key);
    printf("\n\nEnter the value for insert:  ");
    scanf("%d", &value);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            for (j = n - 1; j > i; j--)
            {
                a[j + 1] = a[j];
            }
            a[j] = value;
            n++;
            break;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    getch();
    return 0;
}