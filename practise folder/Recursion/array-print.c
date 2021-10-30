// Write a program in C to print the array elements using recursion

#include <stdio.h>
#include <conio.h>

void array_print(int n[], int s, int num)
{
    if (s > 1)
    {
        printf("%d",n[s]);
        array_print(n, s + 1, num);
    }
}
int main()
{
    int arr[10], num, i;
    printf("Enter a how many element in array: ");
    scanf("%d", &num);
    printf("Enter array element: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    array_print(arr, 0, num);

    getch();
    return 0;
}