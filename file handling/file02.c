#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fl;
    char c;
    printf("Data Input\n\n");
    fl=fopen("INPUT.txt","w");
    while((c=getchar())!=EOF)
    {
        putc(fl,c);
    }
    getch();
    return 0;
}