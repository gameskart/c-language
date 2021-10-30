#include <stdio.h>
#include <conio.h>
void read_matrix(int a[10][10], int rows, int column)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void print_matrix(int a[10][10], int rows, int column)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        printf("\n");
        for (j = 0; j < column; j++)
        {
            printf("\t%d", a[i][j]);
        }
    }
}
int main()
{
    int a[10][10], i, j, rows, column;
    printf("Enter the number rows and column: ");
    scanf("%d%d", &rows, &column);
    printf("Enter the matrix values:  ");

    read_matrix(a, rows, column);
    print_matrix(a, rows, column);

    getch();
    return 0;
}