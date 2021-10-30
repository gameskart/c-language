#include <stdio.h>
#include <conio.h>
char small_character(char t)
{
    if (t >= 65 && t <= 90)
    {
        t += 32;
    }
    return t;
}

char capital_character(char t)
{
    if (t >= 97 && t <= 122)
    {
        t -= 32;
        
    }
    return t;
}
int main()
{
    char c, small, capital;
    printf("Enter a charater: ");
    scanf("%c", &c);

    small = small_character(c);
    printf("It is coverted into small character %c\n", small);

    capital = capital_character(c);
    printf("It is coverted into capital character %c\n", capital);
    getch();
    return 0;
}
