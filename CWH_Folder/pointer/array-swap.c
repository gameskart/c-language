#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[10], n, i, temp;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the values: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 2];
        arr[n - 2] = temp;
    }
    printf("Array reverse is :");
    printf("%d", arr[i]);
    getch();
    return 0;
}