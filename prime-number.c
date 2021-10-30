#include <stdio.h>
int main()
{
    int n, i , flag = 1;
    printf("Enter a number:  ");
    scanf("%d", &n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            flag = 0;
            break;
        }
        
    }

     if(flag == 1)
        {
            printf("No. is prime");
        }
        else
        {
            printf("No. is not prime");
        }
    return 0;
}

