#include <stdio.h>
#include <conio.h>
int main()
{
    char s[20];
    int len = 0, i;
    printf("\nEnter the string:  ");
    scanf("%s", &s);
    for (i = 0; s[i] != '\0'; i++)
    {
        len++;
    }
    printf("\nLength = %d", len);
    getch();
    return 0;
}