// 5.	 WAP TO CHECK THE GREATEST NO AMONG 3 NO’S. CHECK IF ALL ARE SAME OR TWO NO ARE SAME ETC.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter value of A: ");
    scanf("%d", &a);
    printf("Enter value of B: ");
    scanf("%d", &b);
    printf("Enter value of C: ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("A is Greater no.");
        }
        else
        {
            printf("C is Greater no.");
        }
    }
    else
    {
        if (b > c)
        {
            printf("B is Greater no.");
        }
        else if (a == c && a == b && b == c)
        {
            printf("* All are Same *");
        }
        else
        {
            printf("C is Greater no.");
        }
    }
    getch();
    return 0;
}