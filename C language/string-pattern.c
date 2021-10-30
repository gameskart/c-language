#include <stdio.h>
#include <conio.h>
int main()
{
    char s[20];
    int i, j, len = 0;
    printf("\nEnter strings: ");
    scanf("%s", &s);
    for (i = 0; s[i] != '\0'; i++)
        len++;
    for (i = 0; i < len; i++)
    {
        printf("\n");
        for (j = 0; j <= i; j++)
            printf("%c", s[j]);
    }
    getch();
    return 0;
}