/* 9.	WAP TO CHECK WHETHER A CHARACTER IS AN ALPHABET OR NOT USING CTYPE.H */
#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[10];
    int i = 0;
    printf("Enter the character: ");
    scanf("%s",s);
    while(s[i] != '\0')
    {
        if(isalpha(s[i]))
            printf("%c is an alphabet\n",s[i]);
        else
            printf("%c is NOT an alphabet\n",s[i]);
        i++;
    }
    return 0;
}