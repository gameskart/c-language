// 4.	 WAP TO GET ALPHABET AND GIVE THE RESULT OF A DAY ACCORDINGLY (NAME OF THE WEEK).
#include <stdio.h>
#include <conio.h>
int main()
{
    char c[10];
    printf("Enter a character for days: ");
    scanf("%s",&c);
    if(c=="su")
    {
        printf("Sunday");
    }
    else if(c=="mo")   
    {
        printf("Monday");
    } 
    else if(c=="tues")
    {
        printf("Tuesday");
    }
    else if(c=="w")
    {
        printf("Wednesday");
    }
    else if(c=="thrus")
    {
        printf("Thrusday");
    }
    else if(c=="f")
    {
        printf("Friday");
    }
    else if(c=="sat")
    {
        printf("Saturday");
    }
    else 
    {
        printf("Invalid Choice: No");
    }
    getch();
    return 0;
}