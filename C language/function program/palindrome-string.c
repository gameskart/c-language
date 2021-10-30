#include <stdio.h>
#include <conio.h>
#include <string.h>
int str_pal(int len, char s[], int flag)
{
    int i;
    for (i = 0; i < len; i++)
    {
        if (s[i] == s[len - i - 1])
            flag = 1;
        break;
    }
    return flag;
}
int main()
{
    char s[10];
    int i, len, flag = 0, pal;
    printf("Enter string name:  ");
    scanf("%s", &s);
    len = strlen(s);
    pal = str_pal(len, s, flag);
    if (pal == 1)
    {
        printf("It is Palindrome");
    }
    else
    {
        printf("It is not Palindrome");
    }
    getch();
    return 0;
}