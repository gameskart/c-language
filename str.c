#include <stdio.h>
#include <conio.h>
void input(int *a, int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\nEnter array element %d = ", i);
        scanf("%d", &a[i]);
    }
}

void show(int *a, int s)
{
    int i;
    printf("Array emelemt are\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\n", *(&a[i]));
    }
}
int main()
{
    int p[5], b = 5;
    printf("Array element are\n");
    input(p, b);
    show(p, b);
    getch();
    return 0;
}