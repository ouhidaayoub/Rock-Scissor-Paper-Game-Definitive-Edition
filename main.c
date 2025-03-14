#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <stdbool.h>
#include <string.h>

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
    printf("                   -----------------------------------------\n");
    printf("                   | [ Rock, Paper, Scissors ] Game Rules: |\n");
    printf("------------------------------------------------------------------------------------\n");
    printf("| 1. Players: The game is typically played between human and machine.              |\n|                                                                                  |\n");                                                                                             
    printf("| 2. Choices: Each player chooses one of the following:                            |\n");                       
    printf("|    - Rock                                                                        |\n");                                                                   
    printf("|    - Paper                                                                       |\n");
    printf("|    - Scissors                                                                    |\n|                                                                                  |\n");
    printf("| 3. Objective: The goal is to choose a move that defeats the machine's move.      |\n|   The rules for winning are as follows:                                          |\n");
    printf("|  - Rock beats Scissors (Rock crushes Scissors)                                   |\n");
    printf("|  - Scissors beats Paper (Scissors cut Paper)                                     |\n");
    printf("|  - Paper beats Rock (Paper covers Rock)                                          |\n|                                                                                  |\n");

    printf("| 4. Tie: If both player and machine choose the same move, it is a tie, and no one |\n|   wins.                                                                          |\n");

    printf("| 5. Outcome:                                                                      |\n");
    printf("|  - Player wins if their choice beats Machine's choice.                           |\n");
    printf("|  - Machine wins if their choice beats Player's choice.                           |\n");
    printf("|  - Tie if both select the same option.                                           |\n");
    printf("------------------------------------------------------------------------------------\n\n");
}

int machineRandomChoice(int *rounds, int mostChosenInPrevRounds){
    int machineChoiceResult;
        if(((*rounds) == 1)){
            machineChoiceResult = ((rand() % 3)+1);
                switch(machineChoiceResult){
                    case 1:
                        printf("I chose number %d --> Rock\n\n", machineChoiceResult);
                            break;
                    case 2:
                        printf("I chose number %d --> Paper\n\n", machineChoiceResult);
                            break;
                    case 3:
                        printf("I chose number %d --> Scissors\n\n", machineChoiceResult);
                            break;
                }
        }
        if(((*rounds) > 1)){
            machineChoiceResult = mostChosenInPrevRounds;
                switch(machineChoiceResult){
                    case 1:
                        printf("I chose number %d --> Rock\n\n", machineChoiceResult);
                            break;
                    case 2:
                        printf("I chose number %d --> Paper\n\n", machineChoiceResult);
                            break;
                    case 3:
                        printf("I chose number %d --> Scissors\n\n", machineChoiceResult);
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
        printf("| ~~~~~~ | ---> PAPER\n");
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
        printf("\n\n");

            printf("My choice will be: ");
            scanf("%d", &playerManualChoiceResult);

    return playerManualChoiceResult;
}

int playerChoicesCounter(int *rockCounter, int *paperCounter,int *scissorsCounter, int playerManualChoiceResult){
    switch(playerManualChoiceResult){
        case 1:
            (*rockCounter)++;
                printf(" - Rock counter based on this game in this round = %d\n", *rockCounter);
                    break;
        case 2:
            (*paperCounter)++;
                printf(" - Paper counter based on this game in this round = %d\n", *paperCounter);
                        break;
        case 3:
            (*scissorsCounter)++;
                printf(" - Scissors counter based on this game in this round = %d\n", *scissorsCounter);
                    break;
    }

        printf(" - Total counter of all choices based on this game in this round:\n");
            printf("------> Rock counter = %d\n", *rockCounter);
            printf("------> Paper counter = %d\n", *paperCounter);
            printf("------> Scissors counter = %d\n", *scissorsCounter);
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
    bool itsDefined = false;
        for (int i=1; i<=3; i++){
            if((rockCounter > 0) || (paperCounter > 0) || (scissorsCounter > 0)){
                switch (i)
                {
                case 1:
                    if((rockCounter > 0)){
                        ChoiceAverage[1] = ((double)rockCounter)/((double)consumedGames);
                            itsDefined = true;
                                printf("ChoiceAverage[1] = %.6lf\n", ChoiceAverage[1]);
                    }
                    else{
                        printf("ChoiceAverage[1] = Not defined yet cause it doesn't chosen.\n");
                    }
                    break;
                case 2:
                    if((paperCounter > 0)){
                        ChoiceAverage[2] = ((double)paperCounter)/((double)consumedGames);
                            itsDefined = true;
                                printf("ChoiceAverage[2] = %.6lf\n", ChoiceAverage[2]);
                    }
                    else{
                        printf("ChoiceAverage[2] = Not defined yet cause it doesn't chosen.\n");
                    }
                    break;
                case 3:
                    if((scissorsCounter > 0)){
                        ChoiceAverage[3] = ((double)scissorsCounter)/((double)consumedGames);
                            itsDefined = true;
                                printf("ChoiceAverage[3] = %.6lf\n", ChoiceAverage[3]);
                    }
                    else{
                        printf("ChoiceAverage[3] = Not defined yet cause it doesn't chosen.\n");
                    }
                    break;
                }
            }
        }
        int i;
            double mostChosenChoiceByPlayerResult = 0.00;
            while(!itsDefined)
            {
                for ( i=1; i<=3; i++ ){
                    if( (ChoiceAverage[i] >= mostChosenChoiceByPlayerResult)){
                        mostChosenChoiceByPlayerResult = ChoiceAverage[i];
                            printf("\nThe most chosen choice is number: %d\n", i);
                            index = i;
                    }
                    /*else{
                        printf("\nThe most chosen choice is number: %d\n", index);
                    }*/
                }
                printf("\nThe most chosen choice is number: %d\n", index);
            }
            
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

void wannaPlayAgain(int *playAgainChoiceP) {
    char playerAnswer[5];
    int counter = 0;
    do{
        if(counter == 0){
            printf("\n\nGame over\n");
            printf("If you wanna play again type \"Yes\" Otherwise type \"No\"\n");
            scanf("%s", playerAnswer);
                if(strcmp(playerAnswer, "Yes") == 0){
                    printf("Correct [%s]", playerAnswer);
                    *playAgainChoiceP = 1;
                    break;
                }
                else if(strcmp(playerAnswer, "No") == 0){
                    printf("Wrong [%s]", playerAnswer);
                    *playAgainChoiceP = 0;
                    break;
                }
        }
        if( (counter > 0) && ((strcmp(playerAnswer, "Yes") != 0) || (strcmp(playerAnswer, "No") != 0)) ){
            printf("The fuck is that? [%s]", playerAnswer);
            printf("Wrong anwser. You must answer by \"Yes\" or \"No\" as they are typed:");
            scanf("%s", playerAnswer);
                if(strcmp(playerAnswer, "Yes") == 0){
                    printf("Correct [%s]", playerAnswer);
                    *playAgainChoiceP = 1;
                    break;
                }
                else if(strcmp(playerAnswer, "No") == 0){
                    printf("Wrong [%s]", playerAnswer);
                    *playAgainChoiceP = 0;
                    break;
                }
        }
        counter++;
    }while((strcmp(playerAnswer, "Yes") != 0) || (strcmp(playerAnswer, "No") != 0));
}


int main(){

    srand(time(NULL));
    int playAgainChoiceMAIN = 1;

    
    while(playAgainChoiceMAIN){

        displayingWelcomeMessage();
        displayGameRules();
        
        int rockCountermain = 0, paperCountermain = 0,scissorsCountermain = 0;
    
        //This Two variables for handle the score bar result.
        int machineCountermain = 0;
        int playerCountermain = 0;
    
        //First variable for the total initial games number (decreased in each iteration from the rounds)
        //Second variable for the current played games number (increased in each iteration from the games)
        int totalGames = 16;
        int consumedGames = 0;
    
        //Used as parameter in the "mostChosenChoiceByPlayer()" Function to train the machine based on the multiple user inputs
        int mostChosenChoiceByPlayerMAIN;
            // Rounds loop (3)
            for (int round=1; round<=3; round++){
                // reduce the total initial games number in each iteration
                totalGames -= 5;
                    // Games loop (11 then 6 then 1)
                    for (int i=1; i<=totalGames; i++){
                        consumedGames++;

                        printf("Let's start Match %d Round %d\n", i, round);
                        printf("Consumed Games until now = %d\n\n", consumedGames);

                        int machineChoiceResultMAIN = machineRandomChoice(&round, mostChosenChoiceByPlayerMAIN);
                
                        int playerManualChoiceResultMAIN = playerManualChoice(&rockCountermain, &paperCountermain, &scissorsCountermain);
                        playerChoicesCounter(&rockCountermain, &paperCountermain, &scissorsCountermain, playerManualChoiceResultMAIN);
                        mostChosenChoiceByPlayerMAIN = mostChosenChoiceByPlayer(rockCountermain, paperCountermain, scissorsCountermain, consumedGames);
                        whatPlayerManualChoiceReferTo(playerManualChoiceResultMAIN);
                
                        whatIsMachineChoiceEqualTo(machineChoiceResultMAIN);
                
                        int rseultOfDraw;
                        rseultOfDraw = resultComparison(machineChoiceResultMAIN, playerManualChoiceResultMAIN);
                        resultComparisonComment(rseultOfDraw);

                        scoreBar(rseultOfDraw, &machineCountermain, &playerCountermain);
                        scoreBarDisplay(&machineCountermain, &playerCountermain);
                        
                    }
            }
        wannaPlayAgain(&playAgainChoiceMAIN);
    }
    return 0;
}