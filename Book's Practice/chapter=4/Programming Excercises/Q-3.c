#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    int *p, *q;
    a = 10;
    b = 20;
    p = &a;
    q = &a + &b;
    printf("The address of a is %d\n", p);
    printf("The address of a is %d\n", &a);
    printf("The addition of a and b  is %d\n", q);
    getch();
    return 0;
}