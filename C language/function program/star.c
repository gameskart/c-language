#include <stdio.h>
#include <conio.h>
void star(int rows)
{
    int i, j, k;
    for (i = 1; i <= rows; i++)
    {
        printf("*");
        for (j = i + 1; j <= rows; j++)
        {
            printf("\n");
            for (k = 1; k < j; k++)
            {
                printf("*");
            }
        }
    }
}

int main()
{
    int r, c;
    printf("Enter rows and column: ");
    scanf("%d", &r);
    star(r);
    getch();
    return 0;
}