#include <stdio.h>
int main()
{
    int arr[5], i, sum = 0, *ptr;
    printf("\nEnter array elements (5 integer values):\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nThe sum is: %d", sum);
}