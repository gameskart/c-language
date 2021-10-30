// 7. WAP TO CHECK WHETHER THE PERSON IS ELIGIBLE FOR VOTING OR NOT.
#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    printf("Enter Your age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are Eligible for voting");
    }
    else
    {
        printf("You are Not");
    }
    getch();
    return 0;
}