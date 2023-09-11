#include <stdio.h>
int main(){
    int position = 1; // initial position
    int dice;  // user input 
    int steps = 0;  // to show no of steps user took to complete the game
    printf("Welcome to Snake and Ladder Game!\nHope you know the rules given by Dr Ramasubramanian Sir\nYou are currently at 1\nLet's begin the Game :)\n\n");
    while ( position < 100 ){

        printf("Enter number in your dice : ");
        scanf("%d", &dice);
        if ( dice >= 1 && dice <= 6 ){
            position += dice;
            printf("You are currently on %d\n", position);
            if ( position >= 100 ) printf("Hurray!! You've completed this game.\nYou took total %d steps to complete this game", steps);
            
        if ( position <= 80 ){   // ladder is till 80 only
        if ( position % 5 == 0 ){      // for ladder
            position = position + 9;   // +9 steps
            printf("Hurray! You've got a ladder (+9 steps)\nYour are at %d now\n", position);
        }
        }

        if ( position <= 100 ) {  // snakes are till 100
        if ( position % 7 == 0 ){      // for snake
            if ( position == 7 ) position += dice; // except seven
            else {
                position = position - 8;   // -8 steps
                printf("Oops, You are bitten by snake (-8 steps).\nYou are now in %d\n", position);
                if ( position % 5 == 0 ) {   // this case is resisting our program
                    position = position;    // to go into infinite loop
                }   
            }
        }
        }

        if (  position <= 80) {
        if ( position % 5 == 0 && position % 7 == 0 ){  // both ladder & snake
            position = position - 8;   // considering snake bites if both are there
            printf("Oops, You are bitten by snake.\nYou are now in %d\n", position);
        }
        }

        steps++;
        printf("\n");
        }
        else printf("Invalid throw !!!\nPlease try again\n");
    }   
}