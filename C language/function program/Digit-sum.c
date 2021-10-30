#include <stdio.h>
#include <conio.h>
int digit_sum(int n);
int main()
{
    int c, n;
    printf("Enter a number:  ");
    scanf("%d", &n);
    c = digit_sum(n);
    printf("Sum is %d", c);
    getch();
    return 0;
}

int digit_sum(int n)
{
    int sum1, m;
    while (n != 0)
    {
        m = n % 10;
        sum1 = sum1 + m;
        n = n / 10;
    }
    return sum1;
}