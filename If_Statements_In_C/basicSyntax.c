#include <stdio.h>

/**
* @brief Examples on how to use if statements with boolean logic
*
* @return 
*/
int main() {
    // if (statement is true)
    //      execute this line of code

    if (5 < 10)
        printf("Five is now less than ten, that's a big surprise.\n");

    // if you need more than one line executed as a result of a true
    // statement
    if (5 < 10) {
        printf("Line one\n");
        printf("Line two\n");
    }

    // if the statement is false you can have alternate code run as well
    if ( 5 < 1) {
        printf("This message will never show!");
    } else {
        printf("Five is definitely not less than one.\n");
    }


    int age;

    printf("Input your age: ");
    scanf("%d", &age);
    if (age < 100) {
        printf("You are pretty young.\n");
    } else if (age == 100) {
        printf("You are old.\n");
    } else {
        printf("You are really old!\n");
    }
    
    return 0;
}
