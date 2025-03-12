#include <stdio.h>
#include <windows.h>


int playerManualChoice(int *rockCounter, int *scissorsCounter, int *paperCounter);
void whatIsPlayerManualChoiceEqualTo(int playerManualChoiceV);

int main(){

    int rockCounterMain = 0, scissorsCounterMain = 0, paperCounterMain = 0;
    int playerManualChoiceVmain;
    for (int i=0; i<100; i++){
    printf("**********************************************************************************\n**********************************************************************************\n");
    playerManualChoiceVmain = playerManualChoice(&rockCounterMain, &scissorsCounterMain, &paperCounterMain);
    whatIsPlayerManualChoiceEqualTo(playerManualChoiceVmain);
    }
    return 0;
}


int playerManualChoice(int *rockCounter, int *scissorsCounter, int *paperCounter){
    int playerManualChoiceV;
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
        scanf("%d", &playerManualChoiceV);
        getchar();
            if((playerManualChoiceV<1) || (playerManualChoiceV>3)){
                char input[50];
                do{
                    printf("\nRead the selection requirements in the table above. And chhoose again please!\n");
                    Beep(200, 700);
                        printf("If you wanna reach the selection requirements table again... Press \"Enter\" please!");
                            fgets(input, sizeof(input), stdin);
                            
                                if(input[0] == '\n'){
                                    printf("\n\n\nHere is the table again to select a correct choice\n");
                                    printf("---------------------------------------------------\n\n");
                                    printf("Choose one from above:\n");
                                    printf("------------------------------------------");
                                    printf("\n");
                                    printf("| Type [1] if you wanna choose ROCK      |\n");
                                    printf("------------------------------------------");
                                    printf("\n");
                                    printf("| Type [2] if you wanna choose SCISSORS  |\n");
                                    printf("------------------------------------------");
                                    printf("\n");
                                    printf("| Type [3] if you wanna choose PAPER     |\n");
                                    printf("------------------------------------------");
                                    printf("\n");
                                        printf("My choice will be: ");
                                        scanf("%d", &playerManualChoiceV);
                                        getchar();
                                }
                                if((input[0] == '1') || (input[0] == '2') || (input[0] == '3')){
                                    printf("")
                                    printf("You entered a correct choice now\n");
                                    printf("Re-enter it one time please:");
                                    scanf("%d", &playerManualChoiceV);
                                }
                                else{
                                    printf("Your input choice still doesn't much the select requirement\n");
                                    printf("\nRead the selection requirements in the table above. And chhoose again please!\n");
                                    printf("If you wanna reach the selection requirements table again... Press \"Enter\" please!");
                                    fgets(input, sizeof(input), stdin);
                                }
                }while(((playerManualChoiceV < 1) && (playerManualChoiceV > 3)));
            }
    switch(playerManualChoiceV){
        case 1:
        (*rockCounter)++;
        break;
        case 2:
        (*scissorsCounter)++;
        break;
        case 3:
        (*paperCounter)++;
        break;
    }
    return playerManualChoiceV;
}


void whatIsPlayerManualChoiceEqualTo(int playerManualChoiceV){
    switch(playerManualChoiceV){
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