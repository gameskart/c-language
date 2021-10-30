// 2.	 WAP TO SWAP TWO VARIABLES WITH USING THIRD VARIABLES. 
#include <stdio.h>
#include <conio.h>
int main()
{

    int a, b, c;
    printf("Enter a values of a and b:  ");
    scanf("%d%d",&a,&b);
    printf("before swapping the value of a is %d and b is %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping the value of a is %d and b is %d\n",a,b);
    getch();
    return 0;
}