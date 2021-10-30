// 10.	  WAP TO PRINT ASCII VALUE OF A CHARACTER-IF ENTERED IN SMALLER THEN PRINT IN CAPITAL AND VICE VERSA TOO.
#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    int s;
    printf("Enter a Character:  ");
    scanf("%c", &ch);
    printf("The ASCII value character is %d\n",ch);
    if (ch >= 65 && ch <= 90)
    {
        ch += 32;
        printf("It is convert into small character= %c\n", ch);
    }
    else if (ch >= 97 && ch <= 122)
    {
        ch -= 32;
        printf("It is convert into capital character = %c\n", ch);
    }
    getch();
    return 0;
}