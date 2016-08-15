#include <stdio.h>
#include <stdlib.h>

/**
* @brief An introduction to pointers.  Pointers store an address in memory that
*        you can use to look up the value at that memory address and use it.
*        Pointers can be used in functions but remember when you use a pointer
*        you are only retrieving the memory address, you must use the * operator
*        to dereference the pointer (do the look up) and get the actual value.
* @return 
*/
int main() {
    int x, *p;

    // the & operator is the address of operator
    p = &x; // assign p the address of x

    printf("Enter an integer:\n");
    scanf("%d", &x);
    printf("You entered: %d.\n", *p);

    // pointers can also be used with dynamically allocated memory using the
    // malloc function, this function requires the size of memory to allocate
    // it is good practice to use the sizeof(*pointer) notation so that if we
    // were to rewrite it we would only have to do the following
    // float p = malloc(sizeof(*p));
    p = malloc(sizeof(*p));

    *p = x;
    printf("Our dynamically allocated pointer has the value: %d\n", *p);

    // returns memory back to the operating system
    free(p);
    return 0;
}
