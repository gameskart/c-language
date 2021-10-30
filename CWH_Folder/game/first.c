#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomeNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else
    {
        return 0;
    }

    if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else
    {
        return 0;
    }

    if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to Rock, Paper, Scissors Game..\n");
    for (int i = 0; i < 3; i++)
    {
        // generate player input
        printf("Player 1's Turns:\n");
        printf("Choose 1. for Rock, 2 for Paper, 3 for Scissors\n");
        scanf("%d", &temp);
        playerchar = dict[temp - 1];
        printf("You choose %c\n\n", playerchar);

        // generate computer input
        printf("Computer's Turns:\n");
        temp = generateRandomeNumber(3) + 1;
        compchar = dict[temp - 1];
        printf("CPU choose %c\n\n", compchar);

        if (greater(compchar, playerchar) == 1)
        {
            compScore += 1;
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compScore += 1;
            playerScore += 1;
        }
        else
        {
            playerScore += 1;
        }
    }
    if (playerScore > compScore)
    {
        printf("You win the Game\n\n");
    }
    else if (playerScore < compScore)
    {
        printf("CPU win the Game\n\n");
    }
    else
    {
        printf("It's a Draw");
    }
    getch();
    return 0;
}