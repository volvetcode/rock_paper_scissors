#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "game.h"
#include "str.h"

void process_input(int *bot_pick, int *player_pick, int *flag) {
    // just so rand() gefnerates a new number every time
    srand(time(NULL));
    *bot_pick = rand() % 3 + 1;

    printf("What do you pick?\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    if(!scanf(" %d", player_pick)){
        *flag = 1;
    }
}

void compare_answers(int *bot_pick, int *player_pick, char *answer) {
    char *ans;
    printf("You ");
    switch (*player_pick)
    {
    case ROCK:
        if(*bot_pick == ROCK){
            printf("DRAW");
        } else if(*bot_pick == SCISSORS) {
            printf("WIN");
        } else {
            printf("LOSE");
        }
        break;
    case SCISSORS:
        if(*bot_pick == ROCK){
            printf("LOSE");
        } else if(*bot_pick == SCISSORS) {
            printf("DRAW");
        } else {
            printf("WIN");
        }
        break;
    case PAPER:
        if(*bot_pick == ROCK){
            printf("WIN");
        } else if(*bot_pick == SCISSORS) {
            printf("LOSE");
        } else {
            printf("DRAW");
        }
        break;
    default:
        printf("How did you get here?");
        break;
    }
    printf("\n");
}

int play_again(){
    short answer = 0, inpt = 0;
    printf("Press 1 to play again. Anything else to quit");
    printf("\n");
    if(scanf("%hd", &inpt)){
        answer = 1;
    }
    return answer;
}