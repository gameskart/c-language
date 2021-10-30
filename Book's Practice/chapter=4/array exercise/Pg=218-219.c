/*wap to count the number of student belonging to each of the following groups of marks:
    *MARKS*
    0-9,
    10-19,
    20-29,...,100  */

#include <stdio.h>
#include <conio.h>
int main()
{
    float value[50];
    int i, low, high;
    int group[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    //reading the array value
    printf("Enter the marks: ");
    for (i = 0; i < 15; i++)
    {
        scanf("%f", &value[i]);
        ++group[(int)(value[i]) / 10];
    }
    printf("\n");
    printf("Group    Range     Frequency\n\n");
    for (i = 0; i < 11; i++)
    {
        low = i * 10;
        if (i == 10)
        {
            high = 100;
        }
        else
        {
            high = low + 9;
            printf("%2d %3d to %3d   %d\n", i + 1, low, high, group[i]);
        }
    }
    getch();
    return 0;
}