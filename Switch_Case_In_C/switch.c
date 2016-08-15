#include <stdio.h>

void startGame();
void quitGame();
void noGame();

/**
* @brief Examples on how to use the switch (variable) construct.
*
* @return 
*/
int main() {
    char selection;
    printf("Would you like to play a game? y/n\n");
    scanf("%s", &selection);

    switch (selection) {
        case 'y':
        case 'Y':
            startGame();
        break;

        case 'n':
        case 'N':
            noGame();
        break;

        default:
            printf("You must choose either yes - y or no - n.\n");
            break;
    }

    return 0;
}

/**
* @brief Display the start game reponse and then quit the game.
*/
void startGame() {
    printf("You have decided to start the game.\n");
    quitGame();
}

/**
* @brief Display the quit game repsonse.
*/
void quitGame() {
    printf("The game has ended.\n");
}

/**
* @brief Display the no game response.
*/
void noGame() {
    printf("You have elected not to play a game.\n");
}
