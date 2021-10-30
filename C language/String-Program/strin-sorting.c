#include <stdio.h>
#include <conio.h>
int main()
{
    char s[10], temp;
    int n, i, j;
    printf("Enter how many times:  ");
    scanf("%d", &n);
    printf("Enter string:  ");
    for (i = 0; i < n; i++)
    {
        scanf("%s", &s[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; i++)
        {
            if (s[j] > s[j + 1])
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%s", s[i]);
    }
    getch();
    return 0;
}