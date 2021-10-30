#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;
    char city[10];
} a;
int main()
{
    FILE *fp = NULL;
    fp = fopen("student.txt", "w");
    int choice;
    int i;
    _lrotr;
    while (1)
    {
        printf("Enter your choice\n\n");
        printf("Enter 1: for Input Roll No\n");
        printf("Enter 2: for Input Name\n");
        printf("Enter 3: for Input Marks\n");
        printf("Enter 4: for Input City\n");
        printf("Enter 5: for Exit The Data_Base\n\n");
        scanf("%d", &choice);
        printf("You have Entered Your Choice : %d\n\n", choice);

        switch (choice)
        {
        case 1: //for student roll no
            printf("Enter the Student Roll No into the Data Base: ");
            scanf("%d", &a.roll_no);
            fp = fopen("student.txt", "a+-");
            fprintf(fp, "%d\n", a.roll_no);
            printf("The Roll No of Student is %d\n\n", a.roll_no);
            rewind(fp);
            getch();
            break;
        case 2:
            // rewind(fp);
            printf("Enter the Student Name into the Data Base: \n");
            gets(a.name);
            fp = fopen("student.txt", "a");
            fprintf(fp, "%s\n", a.name);
            for (i = 0; a.name[i] != '\0'; i++) //for printing the name of student in array
            {
                printf("The Name of Student is %c\n", a.name[i]);
            }
            fp = fopen("student.txt", "r");
            fprintf(fp, "%c\n", a.name);
            rewind(fp);
            getch();
            break;
        case 3:
            printf("Enter the Student Roll No into the Data Base: ");
            scanf("%d", &a.roll_no);
            fp = fopen("student.txt", "w");
            fprintf(fp, "%d\n", a.roll_no);
            printf("The Roll No of Student is %d\n", a.roll_no);
            fp = fopen("student.txt", "r");
            fprintf(fp, "%d\n", a.roll_no);

            getch();
            break;
        case 4:
            printf("Enter the Student Roll No into the Data Base: ");
            scanf("%d", &a.roll_no);
            fp = fopen("student.txt", "w");
            fprintf(fp, "%d\n", a.roll_no);
            printf("The Roll No of Student is %d\n", a.roll_no);
            fp = fopen("student.txt", "r");
            fprintf(fp, "%d\n", a.roll_no);

            getch();
            break;

        case 5:
            printf("* You are Exit From The Data Base *\n");
            exit(1);
        }
    }
    fclose(fp);
    getch();
    return 0;
}