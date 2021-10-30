// add the given number then subtract them
// for eg: a = 4, b = 3; add = 7;
// and subtract = 1;
#include <stdio.h>
#include <conio.h>
int add(int *a, int *b)
{
    return *a + *b;
}
int subtract(int *a, int *b)
{
    return *a - *b;
}

int main()
{
    int a, b, total;
    printf("Enter the values of a and b: ");
    scanf("%d%d", &a, &b);
    total = add(&a, &b);
    printf("The sum  is %d\n", total);

    total = subtract(&a, &b);
    printf("The subtract is %d\n", total);

    getch();
    return 0;
} 