#include <stdio.h>
#include <conio.h>
void reverse_array(int a[], int n)
{
    int i, j, temp;
    for (i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }
}
int main()
{
    int a[10], i, n, j;
    printf("Enter number of element:  ");
    scanf("%d", &n);
    printf("Enter numbers:  ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    reverse_array(a, n);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("The Element of Array is a[%d]=%d\n", i, a[i]);
    }
    getch();
    return 0;
}