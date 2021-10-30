/*17.	WAP to accept 10 no’s in an array and print them as it is. And ask to perform any mathematical
        function ( +, -, *, /) on each element and update the array. */
#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[10], i, sum = 0;
    printf("Enter array value: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Before update the element of array is:\n");
    for (i = 0; i < 10; i++)
    {
        printf("The array element at a[%d] = %d\n", i, arr[i]);
    }

    getch();
    return 0;
}
