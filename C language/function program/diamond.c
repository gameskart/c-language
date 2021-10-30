#include <stdio.h>
#include <conio.h>
void diamond(int n);
int main()
{
    int n;
    printf("Enter the how many times:  ");
    scanf("%d", &n);
    diamond(n);
    getch();
    return 0;
}
void diamond(int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n + 1; i >= 1; i--)
    {
        for (j = n - i; j >= 0; j--)
        {
            printf(" ");
        }
        for (j = i * 2 - 1; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
