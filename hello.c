/*
Rock Paper Scissors game.
Author:- Raj Mazumder.
*/

#include <stdio.h>

void main(){
// Variable Define
   char user_guessed;
   char computer_guessed = 'r';
   int guess;
   

   printf("Choose 'r' for Rock, 'p' for Paper, 's' for scissors: ");
   scanf("%c", &user_guessed);

// computer choose conditions
    srand(time(0));
    guess = rand()%3 + 1;
    if (guess == 1){
        computer_guessed = 'r';
    }else if (guess == 2){
        computer_guessed = 'p';
    }else{
        computer_guessed = 's';
    }

    printf("You choose %c & computer choose %c\n", user_guessed, computer_guessed);
// Game conditions
    // if computer choose R means ROCK
    if (computer_guessed== 'r' && user_guessed == 'r'){
        printf("Game Draw.\n");
    }else if (computer_guessed== 'r' && user_guessed == 'p'){
        printf("You Win.\n");
    }else if (computer_guessed== 'r' && user_guessed == 's'){
        printf("Computer Win.\n");
    }
    // if computer choose P means PAPER
    if (computer_guessed== 'p' && user_guessed == 'r'){
        printf("Computer Win.\n");
    }else if (computer_guessed== 'p' && user_guessed == 'p'){
        printf("Game Draw.\n");
    }else if (computer_guessed== 'p' && user_guessed == 's'){
        printf("You Win.\n");
    }
    // if computer choose S means Scissors
    if (computer_guessed== 's' && user_guessed == 'r'){
        printf("You Win.\n");
    }else if (computer_guessed== 's' && user_guessed == 'p'){
        printf("Computer Won.\n");
    }else if (computer_guessed== 's' && user_guessed == 's'){
        printf("Game Draw.\n");
    }
}