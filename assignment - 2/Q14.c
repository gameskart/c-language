#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("enter number for display the days:  ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thrusday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Wrong choice");
        break;
    }
    getch();
    return 0;
}