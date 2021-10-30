#include <stdio.h>
#include <conio.h>
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int a = 23, b = 56;
    printf("A is %d and b is %d\n", a, b);
    swap(&a, &b);
    printf("After swap teh value of A is %d and b is %d\n", a, b);
    getch();
    return 0;
}