#include <stdio.h>
#include <conio.h>
int main()
{
    int n, sum = 0, rem = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    printf("Sum is = %d", sum);
    getch();
    return 0;
}