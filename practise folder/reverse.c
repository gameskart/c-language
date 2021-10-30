// Write a C program to find the reverse of an integer number

#include <stdio.h>
#include <conio.h>
int main()
{
    int number, rem, rev = 0;
    printf("Enter the number for reverse:  ");
    scanf("%d", &number);
    while (number != 0)
    {
        rem = number % 10;
        rev = rev * 10 + rem;
        number /= 10;
    }
    printf("%d", rev);
    getch();
    return 0;
}