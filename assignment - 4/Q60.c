// 60.	WAP which shows passing array pointers in a function
#include <stdio.h>
#include <conio.h>
void array(int *ptr, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, ptr[i]);
    }
}
int main()
{
    int arr[10], i, n;
    printf("Enter how many times array: ");
    scanf("%d", &n);
    printf("Enter the array values:  ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    array(arr, n);
    getch();
    return 0;
}