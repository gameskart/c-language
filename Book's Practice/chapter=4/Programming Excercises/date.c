#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    time_t t; // not a primitive datatype
    time(&t);

    printf("\nThis program has been writeen at (date and time): %s", ctime(&t));
    printf("\nThis program processor time is : %d", clock());

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    system("pause");
    return 0;
}

// #include <stdio.h>
// enum week
// {
//     MON,
//     TUES,
//     WED,
//     THURS,
//     FRI,
//     SATUR
// };
// int main()
// {
//     printf("\nMON = %d \nTUES = %d \nWED = %d \nTHURS = %d \nFRI = %d \n SATUR = %d ", MON, TUES, WED, THURS, FRI, SATUR);
//     return 0;
// }