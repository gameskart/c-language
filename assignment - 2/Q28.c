// 28. WAP TO GET NO OF 5 SUBJECTS FROM USER CALCULATE TOTAL MARKS OF A STUDENT,
//  PERCENTAGE AND CHECK THE DIVISION TOO.

#include <stdio.h>
#include <string.h>
int main()
{
    int phy, maths, bio, computer, sst, total;
    float per;
    printf("Input  the marks of Physics: ");
    scanf("%d", &phy);

    printf("Input  the marks of maths: ");
    scanf("%d", &maths);
    printf("Input  the marks of bio: ");
    scanf("%d", &bio);

    printf("Input  the marks of computer: ");
    scanf("%d", &computer);

    printf("Input  the marks of sst: ");
    scanf("%d", &sst);

    total = phy + maths + bio + computer + sst;
    per = total / 5.0;

    if (per >= 60)
        printf("\nThe student get's First division\n\n");
    else if (per < 60 && per >= 48)
        printf("\nThe student get's Second division\n\n");
    else if (per < 48 && per >= 36)
        printf("\nThe student is Pass\n\n");
    else
        printf("\nThe student is Fail\n\n");

    printf("Total Marks = %d\n", total);
    printf("Total percentage = %5.2f\n", per);
    return 0;
}