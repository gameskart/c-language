// 1.	WAP to print sum of series from 1-20

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, sum = 0;
    for (i = 1; i <= 20; i++)
        sum += i;
    printf("%d\n", sum);

    getch();
    return 0;
}