/*WAP to accept 10 no’s in an array and ask any no. from user and search this no. 
whether it is found it that array and not. And print it’s location.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], n, i, key, flag = 0;
    printf("Enter how many times:   ");
    scanf("%d", &n);
    printf("Enter number in array:  ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter a number for searching:  ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("\nValue is found = %d at location a[%d] \n", a[i], i);
    else
        printf("Value is not found");
    getch();
    return 0;
}