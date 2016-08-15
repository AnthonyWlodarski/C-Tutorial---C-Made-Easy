// prerocessor directive that tells the compiler to put the code from the header
// stdio.h into our program before creating the executable
#include <stdio.h>

/**
* @brief First program for the C Tutorial - C Made Easy lessons. 
*
* @return 
*/
int main() {
    // printf is the standard way of displaying output to the screen the quotes tell the
    // compiler that you want to output a literal string as-is (almost)
    // the \n sequence is actually treated as a single character that stands for a
    // newline
    printf("I am alive! Beware. \n");
    // the getchar() function reads in a single character and waits for the user to hit
    // enter before reading the character
    getchar();
    // finally at the end of the program we return a value from main to the operating
    // system by using the return statement, the return value is important as it
    // can be used by the operating system to know if the program was successful
    // or not
    return 0;
}
