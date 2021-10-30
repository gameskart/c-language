#include <stdio.h>
#include <conio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    printf("Enter two values:   ");
    scanf("%d%d", &a, &b);
    printf("Before Swaping the value of a is %d and b is %d\n", a, b);
    swap(&a, &b);
    printf("After Swaping the value of a is %d and b is %d\n", a, b);
    getch();
    return 0;
}