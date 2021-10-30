// WAP to print Fibonacci series
#include <stdio.h>
#include <conio.h>
int fib(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int n, i;
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d", fib(i));
    }
    getch();
    return 0;
}