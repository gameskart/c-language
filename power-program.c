#include <stdio.h>
#include <conio.h>
int power(int a, int b)
{
    int x;
    while (b >= 0)
    {
        x *= a;
        b++;
    }
    return x;
}
int main()
{
    int base, exp, result = 1;
    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter an exponent: ");
    scanf("%d", &exp);

    result = power(base, exp);
    printf("Answer = %d", result);
    return 0;
}