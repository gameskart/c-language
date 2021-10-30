#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *p=NULL;
    char s[15];
    p=fopen("input.txt","w");
    printf("Enter the message in it: ");
    gets(s);
    fprintf(p,"%s",s);
    p=fopen("input.txt","r");
    fscanf(p,"%s",&s);
    // fscanf("");
    getch();
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     /* Pointer to the file */
//     FILE *fp1;
//     /* Character variable to read the content of file */
//     char c;
//     fp1 = fopen("input.txt", "w");
//     printf("Enter the message in it: ");
//     gets(&c);
//     fprintf(fp1, "%s", c);

//     /* Opening a file in r mode*/
//     fp1 = fopen("input.txt", "r");

//     /* Infinite loop –I have used break to come out of the loop*/
//     while (1)
//     {
//         c = fgetc(fp1);
//         if (c == EOF)
//             break;
//         else
//             printf("%c", c);
//     }
//     fclose(fp1);
//     return 0;
// }