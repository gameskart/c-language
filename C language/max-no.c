#include <stdio.h>
#include <conio.h>
int main()
{
    int limit, num, big = 0;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    printf("Enter number: ");
    while (limit > 0)
    {
        scanf("%d", &num);
        if (num > big)
        {
            big = num;
        }
        limit--;
    }
    printf("Biggest no is %d\n", big);
    getch();
    return 0;
}