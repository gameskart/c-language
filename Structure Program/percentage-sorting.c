#include <stdio.h>
struct student
{
    char name[50];
    char class[50];
    int roll_no;
    float percentage;
};

void read(struct student a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the name: ");
        scanf("%s", a[i].name);

        printf("Enter class: ");
        scanf("%s", &a[i].class);

        printf("Enter roll_no: ");
        scanf("%d", &a[i].roll_no);

        printf("Enter percentage:  ");
        scanf("%f", &a[i].percentage);
    }
}

struct student sort(struct student a[], int n)
{
    int i, j;
    struct student temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j].percentage > a[j + 1].percentage)
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return temp;
}

void print(struct student a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%s\n", a[i].name);
        printf("%s\n", a[i].class);
        printf("%d\n", a[i].roll_no);
        printf("%f\n", a[i].percentage);
    }
}

int main()
{
    struct student a[10], sorting;
    int n;

    printf("\nEnter array size=");
    scanf("%d", &n);
    read(a, n);
    printf("\n");
    sorting = sort(a, n);
    printf("\n");
    printf(".........................\n");
    print(a, n);
    printf(".........................\n");
    return 0;
}