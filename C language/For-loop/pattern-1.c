#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, j;
    printf("Enter how many times:  ");
    scanf("%d", &n);
    printf("Enter number: \n");
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
