#include <stdio.h>
#include "game.h"

int main(){
    while(1){
        int bot_pick, player_pick, flag = 0;
        char *answer;
        process_input(&bot_pick, &player_pick, &flag);
        if(flag){
            printf("n/a");
            return 0;
        }
        compare_answers(&bot_pick, &player_pick, answer);
        if(!play_again()){
            break;
        }
    }
}