#ifndef GAME_H
#define GAME_H
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

void process_input(int *bot_pick, int *player_pick, int *flag);
void compare_answers(int *bot_pick, int *player_pick, char *answer);
void output(char *answer);
int play_again();

#endif