// 8.	 WAP TO CHECK WHETHER THE GIVEN CHARACTER IS VOWEL OR CONSTANT.
#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("The Character is Vowel");
    }
    else
    {
        printf("This is Constant");
    }
    getch();
    return 0;
}