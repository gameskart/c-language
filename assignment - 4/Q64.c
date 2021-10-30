#include <stdio.h>
#include <conio.h>
struct student
{
    char st_name[20];
    int st_roll;
    char st_address[20];
}s;
int main()
{
    printf("Enter student Name:\n");
    gets(s.st_name);
    printf("Enter student Roll_No:\n");
    scanf("%d",&s.st_roll);   
    printf("Enter student Address:\n");
    scanf("%s",s.st_address);
    
    printf("*****************************\n");
    printf("%s\n",s.st_name);   
    printf("%d\n",s.st_roll);   
    printf("%s\n",s.st_address);   
    printf("\n*****************************\n");
    getch();
    return 0;
}