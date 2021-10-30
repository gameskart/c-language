#include <stdio.h>
#include <conio.h>
int main()
{
    int product[10][10], rows, col, i, j;
    printf("Enter the number of lines in multiplication table: ");
    scanf("%d%d", &rows, &col);
    printf(" Multiplication Table\n\n");
    printf(" ");
    for (j = 1; j <= col; j++)
        printf("%4d", j);
    printf("\n");
    printf("-----------------------------\n");
    for (i = 0; i < rows; i++)
    {
        rows = i + 1;
        printf("%2d |", rows);
        for (j = 1; j <= col; j++)
        {
            col = j;
            product[i][j] = rows * col;
            printf("%4d", product[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}