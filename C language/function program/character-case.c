#include <stdio.h>
char lower_case(char n);
int toUpper(char n);
int isDigit(char n);
int main()
{
    char c,upper,lower;
    int result;
    printf("Enter a charater: ");
    scanf("%c", &c);
    result = isDigit(c);
    // lower = lower_case(c);
    printf("\nIt is coverted into small character %c", lower);
    printf("\nIt is coverted into capital character %c", upper);
    return 0;
}
char lower_case(char n)
{
    if (n >= 65 && n <= 90)
    {
        n += 32;
    }
    return n;
}

int toUpper(char n)
{
    if (n >= 97 && n <= 122)
    {
        n -= 32;
    }
    return n;
}

int isDigit(char n)
{
    if (n >= 48 && n <= 57)
    {
       return 1;
    }
    return 0;
}