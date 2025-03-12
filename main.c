#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void displayingWelcomeMessage(){
    printf("\n\n*************************************************\n");
    printf("-------------------------------------------------\n");
    printf("-------------------------------------------------\n");
    printf("-----Welcome to the ROCK-PAPER-SCISSORS Game-----\n");
    printf("-------------------------------------------------\n");
    printf("-------------[ DEFINITIVE EDITION ]--------------\n");
    printf("-------------------------------------------------\n");
    printf("-------------------------------------------------\n");
    printf("*************************************************\n\n\n\n\n\n");
}

void displayGameRules(){
    printf("-----------------------------------------\n");
    printf("| [ Rock, Paper, Scissors ] Game Rules: |\n");
    printf("------------------------------------------------------------------------------------\n");
    printf("| 1. Players: The game is typically played between two players.                    |\n|                                                                                  |\n");                                                                                             
    printf("| 2. Choices: Each player chooses one of the following:                            |\n");                       
    printf("|    - Rock                                                                        |\n");                                                                   
    printf("|    - Paper                                                                       |\n");
    printf("|    - Scissors                                                                    |\n|                                                                                  |\n");
    printf("| 3. Objective: The goal is to choose a move that defeats your opponent's move.    |\n|   The rules for winning are as follows:                                          |\n");
    printf("|  - Rock beats Scissors (Rock crushes Scissors)                                   |\n");
    printf("|  - Scissors beats Paper (Scissors cut Paper)                                     |\n");
    printf("|  - Paper beats Rock (Paper covers Rock)                                          |\n|                                                                                  |\n");

    printf("| 4. Tie: If both players choose the same move, it is a tie, and no one wins.      |\n|                                                                                  |\n");

    printf("| 5. Outcome:                                                                      |\n");
    printf("|  - Player 1 wins if their choice beats Player 2's choice.                        |\n");
    printf("|  - Player 2 wins if their choice beats Player 1's choice.                        |\n");
    printf("|  - Tie if both players select the same option.                                   |\n");
    printf("------------------------------------------------------------------------------------\n\n\n");
}

int machineRandomChoice(int *rounds, int mostChosenInPrevRounds){
    int machineChoiceResult;
        if(((*rounds) == 1)){
            machineChoiceResult = ((rand() % 3)+1);
                switch(machineChoiceResult){
                    case 1:
                        printf("I chose number %d --> Rock\n", machineChoiceResult);
                            break;
                    case 2:
                        printf("I chose number %d --> Paper\n", machineChoiceResult);
                            break;
                    case 3:
                        printf("I chose number %d --> Scissors\n", machineChoiceResult);
                            break;
                }
        }
        if(((*rounds) > 1)){
            machineChoiceResult = mostChosenInPrevRounds;
                switch(machineChoiceResult){
                    case 1:
                        printf("I chose number %d --> Rock\n", machineChoiceResult);
                            break;
                    case 2:
                        printf("I chose number %d --> Paper\n", machineChoiceResult);
                            break;
                    case 3:
                        printf("I chose number %d --> Scissors\n", machineChoiceResult);
                            break;
                }
        }
    return machineChoiceResult;
}

void whatIsMachineChoiceEqualTo(int machineChoiceResult){
    switch(machineChoiceResult){
        case 1:
        printf("\nI choose ROCK\n");
        printf("   ____\n");
        printf("  /~~~~\\\n");
        printf(" /~~~~~~\\ ---> ROCK\n");
        printf(" \\~~~~~~/\n");
        break;
        case 2:
        printf("\nI choose PAPER\n");
        printf(" ________\n");
        printf("| ~~~~~~ |\n");
        printf("| ~~~~~~ |\n");
        printf("| ~~~~~~ | ---> PAPER \n");
        printf("|________|\n");
        break;
        case 3:
        printf("\nI choose SCISSORS\n");
        printf("     O   O\n");
        printf("      \\ /  \n");
        printf("       X    ---> SCISSORS\n");
        printf("      / \\ \n");
        break;
    }
}

int playerManualChoice(){
    int playerManualChoiceResult;
        printf("Choose one from above:\n");
        printf("------------------------------------------");
        printf("\n");
        printf("| Type [1] if you wanna choose ROCK      |\n");
        printf("------------------------------------------");
        printf("\n");
        printf("| Type [2] if you wanna choose PAPER     |\n");
        printf("------------------------------------------");
        printf("\n");
        printf("| Type [3] if you wanna choose SCISSORS  |\n");
        printf("------------------------------------------");
        printf("\n");

            printf("My choice will be: ");
            scanf("%d", &playerManualChoiceResult);

    return playerManualChoiceResult;
}

int playerChoicesCounter(int *rockCounter, int *paperCounter,int *scissorsCounter, int playerManualChoiceResult){
    switch(playerManualChoiceResult){
        case 1:
            (*rockCounter)++;
                printf("Rock counter based on this game in this round = %d\n", *rockCounter);
                    break;
        case 2:
            (*paperCounter)++;
                printf("Paper counter based on this game in this round = %d\n", *paperCounter);
                        break;
        case 3:
            (*scissorsCounter)++;
                printf("Scissors counter based on this game in this round = %d\n", *scissorsCounter);
                    break;
    }

    printf("\n");
        printf("Again:\n");
            printf("Rock counter = %d\n", *rockCounter);
            printf("Paper counter = %d\n", *paperCounter);
            printf("Scissors counter = %d\n", *scissorsCounter);
    printf("\n");
}



void whatPlayerManualChoiceReferTo(int playerManualChoiceResult){
    switch(playerManualChoiceResult){
        case 1:
            printf("\nYou choose ROCK\n");
            printf("   ____\n");
            printf("  /~~~~\\\n");
            printf(" /~~~~~~\\ ---> ROCK\n");
            printf(" \\~~~~~~/\n");
                break;
        case 2:
            printf("\nYou choose PAPER\n");
            printf(" ________\n");
            printf("| ~~~~~~ |\n");
            printf("| ~~~~~~ |\n");
            printf("| ~~~~~~ | ---> PAPER \n");
            printf("|________|\n");
                break;
        case 3:
            printf("\nYou choose SCISSORS\n");
            printf("     O   O\n");
            printf("      \\ /  \n");
            printf("       X    ---> SCISSORS\n");
            printf("      / \\ \n");
                break;
    }
}

double mostChosenChoiceByPlayer(int rockCounter, int paperCounter, int scissorsCounter, int consumedGames){
    int index;
    double ChoiceAverage[3];
        ChoiceAverage[1] = rockCounter/consumedGames;
        printf("ChoiceAverage[1] = %.2lf\n");
        ChoiceAverage[2] = paperCounter/consumedGames;
        printf("ChoiceAverage[2] = %.2lf\n");
        ChoiceAverage[3] = scissorsCounter/consumedGames;
        printf("ChoiceAverage[3] = %.2lf\n");
            int i;
                double mostChosenChoiceByPlayerResult = 0.00;
                    for ( i=1; i<=3; i++ ){
                        if( (ChoiceAverage[i] > mostChosenChoiceByPlayerResult)){
                            mostChosenChoiceByPlayerResult = ChoiceAverage[i];
                                printf("\nThe most chosen choice is number: %d\n", i);
                                index = i;
                        }
                    }
    printf("\nThe most chosen choice is number: %d\n", index);
    return index;

}

int resultComparison(int machineChoiceResult, int playerManualChoiceResult){
    if( ((machineChoiceResult == 1) && (playerManualChoiceResult == 3)) || ((machineChoiceResult == 2) && (playerManualChoiceResult == 1)) || ((machineChoiceResult == 3) && (playerManualChoiceResult == 2)) ){
        return 1;
    }
    if( ((machineChoiceResult == 1) && (playerManualChoiceResult == 1)) || ((machineChoiceResult == 2) && (playerManualChoiceResult == 2)) || ((machineChoiceResult == 3) && (playerManualChoiceResult == 3)) ){
        return 0;
    }
    if( ((machineChoiceResult == 3) && (playerManualChoiceResult == 1)) || ((machineChoiceResult == 1) && (playerManualChoiceResult == 2)) || ((machineChoiceResult == 2) && (playerManualChoiceResult == 3)) ){
        return -1;
    }
}

void resultComparisonComment(int resultComparisonCommentV){
    switch(resultComparisonCommentV){
        case 1:
            printf("\n");
            printf("I destroyed you, you can't beat me\n");
            printf("\n");
                break;
        case 0:
            printf("\n");
            printf("TIE! it's okay, next round you will lose for sure!\n");
            printf("\n");
                break;
        case -1:
            printf("\n");
            printf("How an HERO you are! Congrats this time!");
            printf("\n");
                break;
    }
}

int scoreBar(int scoreBarV, int *machineCounter, int *playerCounter){
    switch (scoreBarV){
    case 1:
        (*machineCounter)++;
            break;
    case -1:
        (*playerCounter)++;
            break;
    }
}

void scoreBarDisplay(int *machineCounter, int *playerCounter){
    printf("\n");
    printf("\n");
        printf("Machine [ %d ] - [ %d ] You", *machineCounter, *playerCounter);
    printf("\n");
    printf("\n");
}

int wannaPlayAgain(){
    printf("\n");
    printf("Would you wanna move the next");
    printf("\n");
}

int main(){

    srand(time(NULL));
    displayingWelcomeMessage();
    displayGameRules();

    int rockCountermain = 0, paperCountermain = 0,scissorsCountermain = 0;

    int machineCountermain = 0;
    int playerCountermain = 0;
    int biggestCounter = 0;

    int totalGames = 16;
    int consumedGames = 0;

    int mostChosenChoiceByPlayerMAIN;


        for (int round=1; round<=3; round++){
            totalGames -= 5;
                for (int i=1; i<=totalGames; i++){
                    consumedGames++;
                    printf("\nLet's start Match %d Round %d\n", i, round);

                    int machineChoiceResultMAIN;

                    machineChoiceResultMAIN = machineRandomChoice(&round, mostChosenChoiceByPlayerMAIN);
            
                    int playerManualChoiceResultMAIN;
                    playerManualChoiceResultMAIN = playerManualChoice(&rockCountermain, &paperCountermain, &scissorsCountermain);

                    mostChosenChoiceByPlayerMAIN = mostChosenChoiceByPlayer(rockCountermain, paperCountermain, scissorsCountermain, consumedGames);

                    whatPlayerManualChoiceReferTo(playerManualChoiceResultMAIN);
            
                    whatIsMachineChoiceEqualTo(machineChoiceResultMAIN);
            
                    int rseultOfDraw;
                    rseultOfDraw = resultComparison(machineChoiceResultMAIN, playerManualChoiceResultMAIN);
                    


                    resultComparisonComment(rseultOfDraw);

                    scoreBar(rseultOfDraw, &machineCountermain, &playerCountermain);

                    playerChoicesCounter(&rockCountermain, &paperCountermain, &scissorsCountermain, playerManualChoiceResultMAIN);
                    
                    mostChosenChoiceByPlayer(rockCountermain, paperCountermain, scissorsCountermain, consumedGames);

                    scoreBarDisplay(&machineCountermain, &playerCountermain);

                    printf("\n\nConsumed Games until now = %d\n\n", consumedGames);

                }
            
        }

    return 0;
    
}