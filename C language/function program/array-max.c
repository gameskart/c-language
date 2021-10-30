#include <stdio.h>
#include <conio.h>
int max_array(int *arr, int n)
{
    int largest, i;
    largest = arr[0];
    if (largest < arr[i])
        largest = arr[i];

    return largest;
}
int main()
{
    int arr[10], i, n, max;
    printf("Enter how many times:  ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = max_array(arr, n);
    printf("The largest element is %d", max);
    getch();
    return 0;
}