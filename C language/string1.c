#include <stdio.h>
#include <conio.h>
int main()
{
    char s[10][90];
    int i;
    printf("Enter the names:  ");
    for (i = 0; i < 5; i++)
    {
        gets(s[i]);
    }
    printf("\n\nNames as follow\n");
    for (i = 0; i < 5; i++)
    {
        puts(s[i]);
    }
    getch();
    return 0;
}