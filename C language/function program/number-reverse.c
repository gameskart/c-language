#include <stdio.h>
#include <conio.h>
int number_reverse(int);
int main()
{
    int n, num;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = number_reverse(n);
    printf("Reverse is %d", num);
    getch();
    return 0;
}
int number_reverse(int a)
{
    int r, rev=0;
    while (a != 0)
    {
        r = a % 10;
        rev = rev * 10 + r;
        a /= 10;
    }
    return rev;
}