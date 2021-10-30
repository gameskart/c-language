#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, d;
    printf("Enter value in a or b:  ");
    scanf("%d%d", &a, &b);
    c=++a;
    d=++b;
    c=a++;
    d=b++;
    d=++b;
    
    printf("Prefix value of a is %d and b is %d\n",a,b);
    printf("Prefix value of c is %d and d is %d\n\n",c,d);

    printf("Postfix value of a is %d and b is %d\n",a,b);
    printf("Postfix value of c is %d and d is %d\n\n",c,d);
    
    printf("Prefix value of a is %d and b is %d\n",a,b);
    printf("Prefix value of a is %d and b is %d\n\n",a,b);
    
    printf("Prefix value of a is %d and b is %d\n",a,b);
    getch();
    return 0;
}