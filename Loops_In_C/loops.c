#include <stdio.h>

/**
* @brief Examples of loops in C, also on how to use break and continue.
*
* @return 
*/
int main() {

	/*
	 *  for ( variable initialization; condition; variable update ) {
	 *  	Code to execute while the condition is true
	 *  }
	 */

	int x;
	for (x = 0; x < 1000000; x++) {
		printf("for %d\n", x);
	}
	getchar();
   
    /*
     *  while (condition is true) {
     *      execute code
     *  }
     */
    x = 0;
    while (x < 1000000) {
        printf("while %d\n", x);
        x++; 
    }
    getchar();

    /*
     *  do {
     *  } while (condition);
     */
    x = 0; 
    do {
        printf("do %d\n", x);
        x++;
    } while (x < 1000000);
    getchar();
    // use break to exit the immediately surrounding loop for special circumstances

    x = 0;
    while (x < 1000000) {
        printf("break %d\n", x);
        if (x == 10) {
            break;
        }
        x++;
    }

    getchar();
    return 0;
}
