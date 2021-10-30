#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 1;
    char value;
    // value = i;
    printf("ACSII VALUES ARE:");
    for (i; i <= 128; i++)
    {
        printf("%c", i);
    }
    getch();
    return 0;
}