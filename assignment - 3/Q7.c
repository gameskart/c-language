// 7.	 WAP to check any string is palindrome or not
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char s[10];
    int i, len, flag = 0;
    printf("Enter string name:  ");
    scanf("%s", &s);
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (s[i] == s[len - i - 1])
            flag = 1;
        break;
    }
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
