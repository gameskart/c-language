#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, sum = 0;
    printf("Enter the how many values: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\n%d", i * i);
        sum = i * i + sum;
    }
    printf("\n\nSum is %d", sum);
    getch();
}