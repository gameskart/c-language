#include <stdio.h>
#include <conio.h>
int main()
{
    int m1, m2, m3, m4, m5, per;
    printf("Enter marks of five subject:  ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    per = m1 + m2 + m3 + m4 + m5 / 500 * 100;
    if (per >= 60)
    {
        printf("First division");
    }
    if (per >= 50)
    {
        printf("Second division");
    }
    if (per <= 40)
    {
        printf("Fail");
    }
    getch();
    return 0;
}