#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10][10], i, j, rows, column, sum = 0;
    printf("Enter number of rows and column:  ");
    scanf("%d%d", &rows, &column);
    printf("Enter numbers:  ");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < column; j++)
        {
            for (i = 0; i < rows; i++)
            {
                sum += a[i][j];
            }
        }
    }
    printf("\nThe Result Matrix is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\nSum = %d", sum);
    getch();
}

