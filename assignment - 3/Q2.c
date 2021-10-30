// 2.	 WAP to print reserve of any no & sum of reverse too

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, rev = 0, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
        sum += rem;
    }
    printf("Reverse number is: %d\n", rev);
    printf("Sum of reverse number is: %d\n", sum);
    getch();
    return 0;
}