#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i, j, n, key, p;
    printf("Enter how many element you want to insert in array:\n");
    scanf("%d", &n);
    printf("Enter value to insert:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the value where you want to insert the element in array:\n");
    scanf("%d", &key);
    printf("Enter the value you want to insert on the position of array:\n");
    scanf("%d", &p);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            break;
        }
        for (j = 0; j < n; j++)
        {
            a[j + 1] = p;
            break;
        }
    }
    printf("\nThe array after the inserting the element is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    getch();
    return 0;
}