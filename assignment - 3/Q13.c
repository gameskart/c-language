#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i,j;
    printf("Enter how many times you want to print : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
    }
    getch();
    return 0;
}