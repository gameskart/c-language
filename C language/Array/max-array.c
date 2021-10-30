#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[10], n, i, largest;
    printf("Enter how many times:  ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for (i = 0; i < n; i++)
    {
        if (largest < arr[i])
            largest = arr[i];
    }
    printf("Largest element of array is %d\n", largest);
    getch();
    return 0;
}