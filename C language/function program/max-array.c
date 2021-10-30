#include <stdio.h>
#include <conio.h>
int max_array(int arr[], int n)
{
    int i, largest;
    largest = arr[0];
    for (i = 0; i < n; i++)
    {
        if (largest < arr[i])
            largest = arr[i];
    }
    return largest;
}

int main()
{
    int arr[10], n, i, max;
    printf("Enter how many times:  ");
    scanf("%d", &n);

    printf("Enter array values\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = max_array(arr, n);
    printf("Largest element of array is %d\n", max);
    getch();
    return 0;
}