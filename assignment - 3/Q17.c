// WAP to accept no’s from one 2 D matrix and print them as it is
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10][10], i, j, rows, column;
    printf("Enter the number rows and column: ");
    scanf("%d%d", &rows, &column);
    printf("Enter the matrix values:  ");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        printf("\n");
        for (j = 0; j < column; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }
    getch();
    return 0;
}