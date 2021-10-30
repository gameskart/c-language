#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main()
{
    char alphabet;
    printf("Enter an alphabet: ");
    alphabet = getchar();
    if (islower(alphabet))
        putchar(toupper(alphabet));
    else
        putchar(tolower(alphabet));
    getch();
    return 0;
}