#include <stdio.h>
#include <string.h>

/**
* @brief Examples on how to use strings in C and some of the functionality from
*        the library string.h
*
* @return 
*/
int main() {
    char string[256];

    printf("Please enter a long string.\n");
    fgets(string, 256, stdin);

    printf("You entered:\n%s", string);
    printf("The length of this string is %l characters.\n", strlen(string));
    printf("A string in quotes is a string literal.\n");

    char stringA[10] = "Butterfly";
    char stringB[10] = "Cats";

    /* 
     * When comparing string, strcmp will return a negative value if s1 < s2, zero
     * if s1 is equal to s2 and positive if s1 is greater than s2
     */
    int cmp = strcmp(stringA, stringB);
    printf("The results of comparing %s with %s are %d.\n", stringA, stringB, cmp);
    
    strcpy(stringA, stringB);
    cmp = strcmp(stringA, stringB);
    printf("The results of comparing %s with %s are %d.\n", stringA, stringB, cmp);
    
    strcpy(stringA, "Dinosaur");
    cmp = strcmp(stringA, stringB);
    printf("The results of comparing %s with %s are %d.\n", stringA, stringB, cmp);
    
    return 0;
}
