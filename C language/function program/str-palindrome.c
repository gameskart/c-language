#include <stdio.h>
#include <conio.h>
#include <string.h>
int(char s[])
{
    int i, len, flag = 0;
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
    int len, flag;
    printf("Enter string name:  ");
    scanf("%s", &s);
    len = strlen(s);
    flag = (s);
    if (flag == 1)
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