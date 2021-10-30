#include <stdio.h>
#include <conio.h>
int isPalindromeNumber(int n);
int main()
{
    int n, result;
    printf("Enter number:  ");
    scanf("%d", &n);
    result = isPalindromeNumber(n);
    if (result)
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
int isPalindromeNumber(int n)
{
    int rev = 0, rem = 0, pal;
    pal = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n /= 10;
    }
    if (pal == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}