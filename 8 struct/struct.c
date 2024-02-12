#include<stdio.h>
#include<string.h>
struct player{
    char name[20];
    int score;
}   player1,player2;
int main()
{
    // struct player player1;
    // struct player player2;

    strcpy(player1.name, "Forhad");
    player1.score = 80;

    strcpy(player2.name, "Morshed");
    player2.score = 80;

    printf("%s\n",player1.name);
    printf("%d\n",player1.score);

    printf("%s\n",player2.name);
    printf("%d\n",player2.score);
    
    return 0;
}