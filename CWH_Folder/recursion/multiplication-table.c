#include <stdio.h>
#include <conio.h>
void print(int num)
{
    int i = 1;
    if (i <=num)
    {
        print(num * i - 1);
        printf("%d\n", num);
    }
}
int main()
{
    int n;
    printf("Enter the number for MULTIPLICATION TABLE : ");
    scanf("%d", &n);
    print(n);
    getch();
    return 0;
}