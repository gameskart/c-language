// 3.	 WAP TO GET NO BETWEEN(1-7) AND GIVE THE RESULT OF A DAY ACCORDINGLY (NAME OF THE WEEK).
#include <stdio.h>
#include <conio.h>
int main()
{
    int no;
    printf("Enter the number for a day: ");
    scanf("%d", &no);
    if (no == 1)
    {
        printf("Sunday");
    }
    else if (no == 2)
    {
        printf("Monday");
    }
    else if (no == 3)
    {
        printf("Tuesday");
    }
    else if (no == 4)
    {
        printf("Wednesday");
    }
    else if (no == 5)
    {
        printf("Thrusday");
    }
    else if (no == 6)
    {
        printf("Friday");
    }
    else if (no == 7)
    {
        printf("Saturday");
    }
    else
    {
        printf("Invalid number");
    }
    getch();
    return 0;
}