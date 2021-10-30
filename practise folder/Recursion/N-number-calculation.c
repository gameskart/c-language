// Write a program in C to calculate the sum of numbers from 1 to n using recursion

#include <stdio.h>
#include <conio.h>
int sum(int n)
{
    if (1 <= n)
    {
        return n + sum(n - 1);
    }
}
int main()
{
    int num, add;
    printf("Enter a how many times You want to perform the N number calculation:  ");
    scanf("%d", &num);
    add = sum(num);
    printf("The sum is %d", add);
    getch();
    return 0;
}