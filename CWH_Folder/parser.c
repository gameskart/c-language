#include <stdio.h>
#include <string.h>

int main()
{
    int k = 0, l, i = 0, j = 0, m = 0;
    char s[50];

    printf("Enter your html tag:\n");
    gets(s);

    m = strlen(s);
    for (l = 0; l <= m; l++)
    {
        if (s[l] == '>' && l <= (m / 2))
        {
            i = l;
        }

        else if (s[l] == '<' && l >= (m / 2))
        {
            j = l;
        }
    }
    printf("\n");
    printf("Your content is:\n");

    for (k = 0; k <= m; k++)
    {
        if (s[i + 1] == ' ' || s[j - 1] == ' ')
        {
            if (k > i + 1 && k < j - 1)
            {
                printf("%c", s[k]);
                fflush(stdin);
            }
        }
        else
        {
            if (k > i && k < j)
            {
                printf("%c", s[k]);
                fflush(stdin);
            }
        }
    }

    return 0;
}
