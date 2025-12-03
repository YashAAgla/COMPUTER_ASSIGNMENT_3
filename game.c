//This Is My Fist Project
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int Player,Computer_Choice;
    char a[100];
    printf("Welcome to Stone, Paper, Scissor! \n");
    printf(" It's game time! But first…\nTell us your name, Champion! \n");
    scanf("%[^\n]", a);
    /*0 --> Stone
      1 --> Paper
      2 --> Scissor*/
    printf("Alright!\nswhat's your choice?\n Choose 0 For Stone\nChoose 1 For Paper\nChoose 2 For Scissor\n");
    scanf("%d",&Player);
   // printf("Player_Choose : %d\n",Player);
    if (Player == 0)
    {
        printf("Player Choose Stone! \n");
    }
    if (Player == 1)
    {
        printf("Player Choose Paper! \n");
    }
    if (Player == 2)
    {
        printf("Player Choose Scissor! \n");
    }
    srand(time(0));
    Computer_Choice = rand() % 3;
   // printf("Computer_Choose : %d\n",Computer_Choice);
    if (Computer_Choice == 0)
    {
        printf("Computer Choose Stone!");
    }
    if (Computer_Choice == 1)
    {
        printf("Computer Choose Paper!");
    }
    if (Computer_Choice== 2)
    {
        printf("Computer Choose Scissor!\n");
    }
    if (Player == 0 && Computer_Choice == 0)
    {
        printf("\nIt's Tie!");
    }
    else if (Player == 0 && Computer_Choice == 1)
    {
        printf("\ncomputer Wins!");
    }
    else if (Player == 0 && Computer_Choice == 2)
    {
        printf("\nPlayer Wins!");
    }
    else if (Player == 1 && Computer_Choice == 0)
    {
        printf("\nPlayer Wins!");
    }
    else if (Player == 1 && Computer_Choice == 1)
    {
        printf("\nIt's Tie!");
    }
    else if (Player == 1 && Computer_Choice == 2)
    {
        printf("\ncomputer Wins!");
    }
    else if (Player == 2 && Computer_Choice == 0)
    {
        printf("\ncomputer Wins!");
    }
    else if (Player == 2 && Computer_Choice == 1)
    {
        printf("\nPlayer Wins!");
    }
    else if (Player == 2 && Computer_Choice == 2)
    {
        printf("\nIt's Tie!");
    }
    return 0;  
}