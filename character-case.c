#include <stdio.h>
#include <conio.h>
int main()
{
    char c;
    printf("Enter a charater: ");
    scanf("%c", &c);
    if (c >= 65 && c <= 90)
    {
        c += 32;
        printf("It is coverted into small character %c", c);
    }
    else if (c >= 97 && c <= 122)
    {
        c -= 32;
        printf("It is coverted into capital character %c", c);
    }
    getch();
    return 0;
}
