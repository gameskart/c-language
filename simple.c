#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    printf("Enter how many times you want print:  ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d Baar\n", i);
    }
    getch();
    return 0;
}   