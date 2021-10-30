//	 WAP to add two 2-D matrix and print resultant matrix
#include <stdio.h>
int main()
{
    int rows, col, a[10][10], b[10][10], sum[10][10], i, j;
    printf("Enter the number of rows and column (between 1 and 10): ");
    scanf("%d%d", &rows, &col);
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < col; j++)
        {
            printf("Enter element a[%d] [%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    printf("\n\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < col; j++)
        {
            printf("Enter element a[%d] [%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    printf("\nSum of two matrices: \n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
            if (j == col - 1)
            {
                printf("\n");
            }
        }
    return 0;
}