// WAP to print a multiplication table of any no

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i;
    printf("Enter a number to print the multiplication table: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    getch();
    return 0;
}