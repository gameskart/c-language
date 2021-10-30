// 6.	 WAP to check any no is a palindrome or not
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, rev = 0, rem = 0, pal;
    printf("Enter number:  ");
    scanf("%d", &n);
    pal = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n /= 10;
    }
    if (pal == rev)
    {
        printf("It is Palindrome");
    }
    else
    {
        printf("It is not Palindrome");
    }
    getch();
    return 0;
}