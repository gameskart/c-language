#include <stdio.h>
int pow(int x,int y)
{
    if(y==0)
    {
        return 1;
    }
    return x * pow(x ,y-1);
}
int main()
{
    int base, exp, result = 1;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    result = pow(base,exp);
    printf("Answer = %d", result);
    return 0;
}