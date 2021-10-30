#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[10], i, j, n, temp;
    printf("Enter how many times the array: ");
    scanf("%d", &n);
    printf("Enter the values in it:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[i] > arr[j + 1])
            {
                temp = arr[i];
                arr[i] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The Sorting is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    getch();
    return 0;
}