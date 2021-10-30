#include <stdio.h>
#include <conio.h>
void number_print(int num)
{
    int i = 1;
    if (num)
    {
        number_print(num - 1);
    }
    else
        return ;
    printf("%d\t", num);
}
int main()
{
    int n;
    printf("Enter the how many number to print:\n");
    scanf("%d", &n);
    number_print(n);
    // printf("%d\n", n);
    getch();
    return 0;
}
