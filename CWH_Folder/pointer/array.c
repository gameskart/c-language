#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[] = {12, 23, 34, 45};
    int *p=arr;
    int *q=NULL;
    printf("The Adrress of first element of array is %d\n", *&arr);
    printf("The Adrress of second element of array is %d\n", *(arr + 1));
    printf("The Adrress of third element of array is %d\n", arr[0]);
    printf("The Adrress of fourth element of array is %d\n", arr+1);
    printf("The Adrress of pointer value is %d\n", *&p);
    printf("The Adrress of pointer value is %d\n", p);
    printf("The Adrress of first element of array is %d\n", arr);
    printf("The Adrress of pointer value is %d\n", *p+2);
    printf("The Adrress of pointer value is %d\n", q);
    getch();
    return 0;
}