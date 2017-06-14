#include <cs50.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int t = rand()%100;
    int php = 100;
    int mhp = 100;
    int pat = 5;
    int mat = 3;
    
    while(php > 0 && mhp > 0)
    {
        if(t >= 60)
        {
            mhp = mhp - pat;
            printf("Player punch Monster, Monster lose 5 HP\n Player HP: %i\n Monster HP: %i\n",php, mhp);
            if(mhp == 0)
            {
                
            }
            else
            {
            php = php - mat;
            printf("Monster punch Player, Player lose 3 HP\n Player HP: %i\n Monster HP: %i\n",php, mhp);
            }
        }
        else
        {
            php = php - mat;
            printf("Monster punch Player, Player lose 3 HP\n Player HP: %i\n Monster HP: %i\n",php, mhp);
            if(php == 0)
            {
                
            }
            else
            {
            mhp = mhp - pat;
            printf("Player punch Monster, Monster lose 5 HP\n Player HP: %i\n Monster HP: %i\n",php, mhp);
            }
        }
    }
    
    if(php <= 0)
    {
        printf("Player is DEAD. GAME OVER\n Player HP: %i\n Monster HP: %i\n",php, mhp);
    }
    else if(mhp <= 0)
    {
        printf("Monster is DEAD. YOU WIN\n Player HP: %i\n Monster HP: %i\n",php, mhp);
    }
}