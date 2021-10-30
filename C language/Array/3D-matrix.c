#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10][10][10],i, j, k, rows, column;
    printf("Enter number of rows and column:");
    scanf("%d%d", &rows, &column);
    printf("Enter the values in it:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < column; j++)
        {
            for (k = 0; k < rows; k++)
            {
                scanf("%d%d%d", &a[i][j][k]);
            }
        }
    }
    for (int i = 0; i < rows; i++)
    {
        printf("\n");
        for (int j = 0; j < column; j++)
        {
            printf("\n");
            for (int k = 0; k < rows; k++)
            {
                printf("%d\t", a[i][j][k]);
            }
        }
    }

    getch();
    return 0;
}