#include <cs50.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int main(void)
{
    srand(time(NULL));
    int pp1 = 0;
    int pp2 = 0;
    for(int i = 0; i < 100; i++ )
    {
        string p1;
        string p2;
        int j = rand()%100;
        if(j <= 30)
        {
            p1 = "Rock";
        }
        else if(j > 30 && j < 70)
        {
            p1 = "Scissor";
        }
        else
        {
            p1 = "Paper";
        }
        int k = rand()%100;
        if(k <= 30)
        {
            p2 = "Scissor";
        }
        else if(k > 30 && k <= 70)
        {
            p2 = "Paper";
        }
        else
        {
            p2 = "Rock";
        }
        
        printf("Game %d: Player 1 choose %s %d, player 2 choose %s %d . ", i, p1, j, p2, k);
        
        if(strcmp(p1, "Rock") == 0 && strcmp(p2, "Scissor") == 0)
        {
            printf("Player 1 WIN!\n");
            pp1 += 1;
        }
        else if(strcmp(p1, "Scissor") == 0 && strcmp(p2, "Paper") == 0)
        {
            printf("Player 1 WIN!\n");
            pp1 += 1;
        }
        else if(strcmp(p1, "Paper") == 0 && strcmp(p2, "Rock") == 0)
        {
            printf("Player 1 WIN!\n");
            pp1 += 1;
        }
        else if(strcmp(p1, p2) == 0)
        {
            printf("DRAW!\n");
        }
        else
        {
            printf("Player 2 WIN!\n");
            pp2 += 1;
        }
    }
    printf("Game Over! Player 1: %d, Player 2: %d\n", pp1, pp2);
    if(pp1 > pp2)
    {
        printf("Player 1 is the Winner!\n");
    }
    else if(pp1 == pp2)
    {
        printf("It is a Draw!\n");
    }
    else
    {
        printf("Player 2 is the Winner!\n");
    }
}