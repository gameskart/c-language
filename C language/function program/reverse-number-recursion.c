#include <stdio.h>
#include <conio.h>
int reverse_number(int n)
{
    static int rem, rev = 0;
    if (n==0)
    {
        return rev;
    }
    rem = n % 10;
    rev=rev*10+rem;
    reverse_number(n / 10);
}
int main()
{
    int n, reverse;
    printf("Enter a number: ");
    scanf("%d", &n);
    reverse = reverse_number(n);
    printf("Reverse of number is %d", reverse);
    getch();
    return 0;
}