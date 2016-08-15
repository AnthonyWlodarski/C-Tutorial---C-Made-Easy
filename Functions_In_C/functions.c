#include <stdio.h>

int mult (int x, int y);

/**
* @brief The main function to execute
*
* @return 
*/
int main() {
    /*
     * General format for a function prototype is simple:
     * return-type function-name (argument-type-1 argument-name-1, argument-type-N argument-name-N);
     * Functions that do not have a return type by default have a return type of void.
     */
    
    int x, y;

    printf("Please enter two integers to be multiplied: ");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("The product of %d and %d is: %d\n", x, y, mult(x, y));
    getchar();
    return 0;
}

/**
* @brief This function returns the product of two integer values x and y. 
*
* @param x
* @param y
*
* @return 
*/
int mult (int x, int y) {
    return x * y;
}
