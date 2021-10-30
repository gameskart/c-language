// WAP to print sum / average of all the elements of an array.
#include <stdio.h>
int main()
{
    int Arr[10], n, i, sum = 0;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &Arr[i]);
        sum += Arr[i];
    }
    printf("\nThe sum of the array is : %d", sum);
    printf("\nThe average of the array is : %0.2f", (float)sum / n);
    return 0;
}