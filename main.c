#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayingWelcomeMessage(){
    printf("\n");
    printf("             Welcome to the ROCK-SCISSORS-PAPER Game              ");
    printf("\n");
    printf("-----------------------DEFINITIVE EDITION ------------------------");
    printf("\n");
    printf("\n");
}

int machineRandomChoice(){
    int machineChoiceV;
    machineChoiceV = rand() % 3;
    //printf("\nMachine choice = %d", machineChoiceV);
    return machineChoiceV;
}

void whatIsMachineChoiceEqualTo(int *machineChoiceV){
    switch(*machineChoiceV){
        case 0:
        printf("\nI choose ROCK\n");
        break;
        case 1:
        printf("\nI choose SCISSORS\n");
        break;
        case 2:
        printf("\nI choose PAPER\n");
        break;
    }
}

int playerManualChoice(){
    int playerManualChoiceV;
    printf("Choose one from above:\n");
    printf("Type [1] if you wanna choose ROCK\n");
    printf("Type [2] if you wanna choose SCISSORS\n");
    printf("Type [3] if you wanna choose PAPER\n");

    scanf("%d", &playerManualChoiceV);
    return playerManualChoiceV;
}

void whatIsPlayerManualChoiceEqualTo(int *playerManualChoiceV){
    switch(*playerManualChoiceV){
        case 1:
        printf("\nYou choose ROCK\n");
        break;
        case 2:
        printf("\nYou choose SCISSORS\n");
        break;
        case 3:
        printf("\nYou choose PAPER\n");
        break;
    }
}

int main(){

    srand(time(NULL));
    displayingWelcomeMessage();

    int machineChoiceVmain;
    machineChoiceVmain = machineRandomChoice();

    int playerManualChoiceVmain;
    playerManualChoiceVmain = playerManualChoice();
    whatIsPlayerManualChoiceEqualTo(&playerManualChoiceVmain);

    whatIsMachineChoiceEqualTo(&machineChoiceVmain);







    return 0;
}