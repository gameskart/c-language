// 1.	WAP TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);
    printf("Before swapping the values of a is %d and b is %d\n",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping the values of a is %d and b is %d\n",a,b);
    getch();
    return 0;
}