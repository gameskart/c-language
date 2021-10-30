// wap to print number of positive and negative number and count them

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, count, num[10];
    printf("Enter how many times: ");
    scanf("%d", &n);
    printf("Enter any number: ");

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 1; i <= n; i++)
    {

        // count = num;
        if (num[i] < 0)
        {
            
        }
        else if (num[i] > 0)
        {
            continue;
        }
        // if (count == num)
        // {
        //     printf("%d", count);
        // }
    }
    printf("Negative number is %d\n", num[i]);

    printf("Positive number is %d\n", num[i]);
    getch();
    return 0;
}
