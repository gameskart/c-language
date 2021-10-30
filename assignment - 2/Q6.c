// 6.	 WAP TO CHECK WHETHER A GIVEN NO IS EVEN OR ODD.
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The number is Odd");
    }
    getch();
    return 0;
}