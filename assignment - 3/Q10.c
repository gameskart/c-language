// 10.	 WAP to print even no’s from 1 to 50.
#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    getch();
    return 0;
}