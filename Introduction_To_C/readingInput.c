#include <stdio.h>

/**
* @brief Short demo on numbers, getting used to how scanf/printf work.
*
* @return 
*/
int main() {
    int thisIsANumber;

    // output some text to the user of the program
    printf("Enter a number:");
    // read the user, notice "%d" means read an integer, the second argument
    // to scanf is the variable, we are giving scanf directions to where the
    // variable lives
    scanf("%d", &thisIsANumber);
    // output the values of the read integer to the user
    // scanf and printf use both the same format specifiers
    printf("You entered %d", thisIsANumber);
    getchar();
    return 0;
}
