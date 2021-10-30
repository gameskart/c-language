// 54.	WAP to use strlen, strcat, strcmp, strcpy, strrev etc. pre-defined functions of string in one program

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[54];

    printf("The length is %d\n", strlen(s2));
    printf("The strcat is %s\n", strcat(s1, s2));
    printf("The strcmp is %d\n", strcmp(s1, s2));
    printf("The strcpy is %s\n", strcpy(s3, s1));
    printf("The strrev is %s\n", strrev(s2));

    return 0;
}