// wap to input days and convert it into years,week,days
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     char days;
//     printf("%s", days);
//     time_t t;
//     printf("The date is %s", getche());
//     printf("%s",strftime(t));
//     getch();
//     return 0;
// }

#include <stdio.h>
int main()
{
    int days, years, weeks;

    printf("Enter the days: ");
    scanf("%d",&days);
    // days = 1329;

    // Converts days to years, weeks and days
    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);

    return 0;
}