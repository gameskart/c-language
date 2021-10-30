#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b = 1002, *p;
    p = &a;
    p = &b;
    printf("The address of a is %d\n\n", &a);
    printf("The value of a is %d\n\n", p);
    printf("The value of a is %d\n\n", &p);
    printf("The address of b is %d\n\n", &b);
    printf("the b is %d\n\n", p);
    printf("The value of b is %d\n\n", *p + 2);
    // typedef int k[10];
    // k a, b, c;
    // int n;
    // printf("Enter the value in a and b: ");
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d%d%d", &a[i], &b[i], &c[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d %d %d\n", a[i], b[i], c[i]);
    // }
    getch();
    return 0;
}