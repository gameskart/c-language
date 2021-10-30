//  Write a program in C to print first 50 natural numbers using recursion

#include <stdio.h>
#include <conio.h>

void natural_number(int n)
{
    if (n <= 50)
    {
        printf("%d\n\n", n);
        natural_number(n + 1);
        printf("%d\n", n);

    }
}
int main()
{
    int num = 1;
    natural_number(num);
    getch();
    return 0;
}