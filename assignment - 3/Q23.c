//  WAP to concatenate 2 array elements in one array.
#include <stdio.h>
void main()
{
    int a[10], b[10], c[20], i, n;
    printf("Enter how many times the array:  ");
    scanf("%d", &n);
    printf("Enter Elements in 1st Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    printf("Enter Elements in 2nd Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("b[%d] = ",i);
        scanf("%d", &b[i]);
    }
    printf("\nElements of Array After Merge: ");
    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d\n", c[i]);
    }
}