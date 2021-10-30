#include <stdio.h>
#include <conio.h>
int prime_number(int n)
{
    int i, flag = 1;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    int n, i, prime;
    printf("Enter a number:  ");
    scanf("%d", &n);
    prime = prime_number(n);
    if (prime == 1)
    {
        printf("No is prime");
    }
    else
    {
        printf("No is not prime");
    }
    getch();
    return 0;
}