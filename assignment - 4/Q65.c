/* 65.	WAP to accept employee details like emp_name, emp_doj, emp_address, emp_dob etc. using union
and print them like a table
*/

#include <stdio.h>
#include <conio.h>
union employee
{
    char emp_name[20];
    int emp_doj;
    char emp_dob[10], emp_address[30];
}e;
int main()
{
    printf("Enter Emp_Name:\n");
    gets(e.emp_name);
    printf("Enter Emp_doj:\n");
    scanf("%d",&e.emp_doj);   
    printf("Enter Emp_dob:\n");
    scanf("%s",e.emp_dob);
    printf("Enter Emp_address:\n");
    scanf("%s",e.emp_address);
    
    printf("*****************************\n");
    printf("%s\n",e.emp_name);   
    printf("%d\n",e.emp_doj);   
    puts(e.emp_dob);   
    printf("%s\n",e.emp_address);   
    printf("\n*****************************\n");
    getch();
    return 0;
}