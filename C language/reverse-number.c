#include <stdio.h>
#include <conio.h>
int main()
{
    int n, r, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    printf("Reverse of number is %d", rev);
    getch();
    return 0;
}