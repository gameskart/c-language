// 58.	WAP to do main arithmetic function (+, -, *, /) using pointers
#include <stdio.h>
int add(int *x,int *y)
{
    return *x+*y;
}
int sub()
{
    int x,y;
    printf("Enter two number for subtraction: ");
    scanf("%d%d",&x,&y);
    return x-y;
}
void mul(int x,int y)
{
    printf("Multiplication is %d\n",x*y);
}
void div()
{
    float x,y;
    printf("Enter the number for division: ");
    scanf("%f%f",&x,&y);
    printf("%.2f",x/y);
}
int main()
{
    int a,b;
    printf("Enter two number for addition: ");
    scanf("%d%d",&a,&b);
    printf("Addition is %d\n",add(&a,&b));
    printf("Subtraction is %d\n",sub());
    printf("Enter two number for multiply: ");
    scanf("%d%d",&a,&b);
    mul(a,b);
    div();
    return 0;
}