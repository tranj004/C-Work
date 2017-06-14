#include <cs50.h>
#include <stdio.h>

void status(int l, int p);
void loselife(int l, int p);
void pointgain(int p);
int gameover(int l, int p);
void won(int l, int p);

int main(void)
{
    int l = 3;
    int p = 0;
    printf("Welcome to Magic Card trivia game!");
    status(l, p);
    printf("Q1: If 'Dance with Devils' card is use, how many red devil tokens is made?\n A: 1\n B: 2\n C: 3\n Answer: ");
    char q1 = get_char();
    if(q1 == 'b' || q1 == 'B')
    {
        pointgain(p += 10);
    }
    else
    {
        loselife(l -= 1, p);
    }
    status(l, p);
    printf("Q2: The Defender card 'Fortified Rampart' has how many toughness?\n A: 3\n B: 6\n C: 9\n Answer: ");
    char q2 = get_char();
    if(q2 == 'b' || q2 == 'B')
    {
        pointgain(p += 10);
    }
    else
    {
        loselife(l -= 1, p);
    }
    status(l, p);
    printf("Q3: What type of card is 'Jayemdae Tome'?\n A: Artifact\n B: Instant\n C: Sorcery\n Answer: ");
    char q3 = get_char();
    if(q3 == 'a' || q3 == 'A')
    {
        pointgain(p += 10);
    }
    else
    {
        loselife(l -= 1, p);
    }
    status(l, p);
    printf("Q4: 'Rancid Rats' has Skulk and one other ability, what is it?\n A: Lifelink\n B: Trample\n C: Deathtouch\n Answer: ");
    char q4 = get_char();
    if(q4 == 'c' || q4 == 'C')
    {
        pointgain(p += 10);
    }
    else
    {
        loselife(l -= 1, p);
    }
    status(l, p);
    printf("Q5:When 'Youthful Scholar' dies, his ability allow you to draw how many cards?\n A: 1\n B: 2\n C: 3\n Answer: ");
    char q5 = get_char();
    if(q5 == 'b' || q5 == 'B')
    {
        pointgain(p += 10);
    }
    else
    {
        loselife(l -= 1, p);
    }
    status(l, p);
    printf("Q6: 'Incremental Growth' allow you to target how many creatures?\n A: 1\n B: 2\n C: 3\n Answer: ");
    char q6 = get_char();
    if(q6 == 'c' || q6 == 'C')
    {
        pointgain(p += 10);
    }
    else
    {
        loselife(l -= 1, p);
    }
    
    won(l, p);
}

void status(int l, int p)
{
    printf("\nLife Remaining %i\n", l);
    printf("Point Have %i\n\n", p);
}

void loselife(int l, int p)
{
    if(l > 0)
    {
        printf("Wrong, you lose a life!\n");
    }
    else
    {
        printf("Wrong, you lose a life!\n");
        gameover(l, p);
    }
}

void pointgain(int p)
{
    printf("Correct you gain 10 points\n");
}

int gameover(int l, int p)
{
    printf("\n!!!GAME OVER!!!\n");
    status(l, p);
    exit(0);
}

void won(int l, int p)
{
    printf("\n!!!CONGRATUATIONS YOU WON!!!\n");
    status(l, p);
}