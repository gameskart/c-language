#include <stdio.h>
#include <conio.h>
void avg(int *p)
{
    for (int i = 0; i < 3; i++)
    {
        printf("The value of array[%d]=%d\n", i, p[i]); //first type of pointer accessing
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("The value of array[%d]=%d\n", i, *(p + i)); //second type of pointer accessing
    }
}
int main()
{
    int a[] = {1, 2, 3};
    avg(a);
    // printf("%d\n", a);
    getch();
    return 0;
}