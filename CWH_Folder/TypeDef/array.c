#include <stdio.h>
#include <conio.h>
void input(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    typedef int array[10];
    int n;
    array a, b;
    printf("Enter how many array value of A :  ");
    scanf("%d", &n);
    printf("Enter the array values : ");
    input(a, n);
    printf("\n\n");
    print(a, n);
    printf("\n\nEnter how many array value of B :  ");
    scanf("%d", &n);            
    printf("Enter the array values : ");
    input(b, n);
    printf("\n\n");
    print(b, n);
    getch();
    return 0;
}