#include <stdio.h>
#include <conio.h>
int main()
{
    char *name = "himanshu";
    int l;
    while (*name != '\0')
    {
        printf("%c", *name);
        name++;
        l++;
    }
    printf("\n%d", l);
    getch();
    return 0;
}