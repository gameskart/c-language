// 63.	WAP to swap two integers using pointers passing in the function

#include <stdio.h>
#include <conio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("Enter two integer: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping the value of a is %d & b is %d\n",a,b);
    swap(&a,&b);
    printf("After swapping the value of a is %d & b is %d\n",a,b);
    getch();
    return 0;
}