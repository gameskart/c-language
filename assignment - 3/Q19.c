// 22.	 WAP to multiply two 2-D matrix and print resultant matrix
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, r2, c2, r1, c1, k, tot = 0;
    int first[10][10], sec[10][10], mul[10][10];
    printf("\n\nPlease insert the number of rows and columns for first matrix\n");
    scanf("%d%d", &r1, &c1);
    printf("Insert your matrix elements :\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &first[i][j]);
    printf("Please insert the number of rows and columns for second matrix\n");
    scanf("%d%d", &r2, &c2);
    if (c1 != r2)
        printf("Your given matrices cannot be multiplied with each other. \n ");
    else
    {
        printf("Insert your elements for second matrix \n");

        for (i = 0; i < r1; i++)
            for (j = 0; j < c2; j++)
                scanf("%d", &sec[i][j]);
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                for (k = 0; k < r1; k++)
                {
                    tot = tot + first[i][k] * sec[k][j];
                }
                mul[i][j] = tot;
                tot = 0;
            }
        }

        printf("The result of matrix multiplication or product of the matrices is:\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
                printf("%d \t", mul[i][j]);
            printf("\n");
        }
    }
    getch();
    return 0;
}