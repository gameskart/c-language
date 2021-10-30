#include <stdio.h>
#include <conio.h>
int Row_Wise_Sum(int a[10][10], int rows, int column)
{
    int i, j, sum;
    for (i = 0; i < rows; i++)
    {
        sum = 0;
        for (j = 0; j < column; j++)
        {
            for (i = 0; i < rows; i++)
            {
                sum += a[i][j];
            }
        }
    }
    return sum;
}
void main()
{

    int a[10][10], i, j, rows, column, add;
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
    add = Row_Wise_Sum(a, rows, column);
    printf("\nSum = %d", add);
    getch();
}