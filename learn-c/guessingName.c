#include <stdio.h>
#include <string.h>

int main(){
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int limitGuess = 3;
    int outOfGuesses = 0;

    while (guess != secretNumber && outOfGuesses == 0){
        if (guessCount < limitGuess ){
        printf("enter number");
        scanf("%d", &guess);
        guessCount++;
        } else{
            outOfGuesses = 1;
        }
    }
        if(outOfGuesses == 1){
            printf("Out of guesses");
        }else{
            printf("You winn!!");
        }
}