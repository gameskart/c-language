#include <stdio.h>
#include <conio.h>
int main()
{
    int i,no,table[10];
    printf("Enter a no: ");
    scanf("%d",&no);
    for(i=1;i<=10;i++)
    {
        table[i]=no*i;
        printf("%d * %d = %d\n",no,i,table[i]);
    }
    getch();
    return 0;
}