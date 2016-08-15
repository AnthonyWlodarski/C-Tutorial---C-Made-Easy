#include <stdio.h>
#include <stdlib.h>

/**
* @brief Arrays are awesome!
*
* @return 
*/

int main() {
    int someNumbers[10];
    int x,y;

    for (x = 0; x < 10; x++) {
        someNumbers[x] = rand();    
    }

    for (x = 0; x < 10; x++) {
        printf("Random number: %d\n", someNumbers[x]);
    }

    int moreNumbers[10][10];
    x = y = 0;    
    for (y = 0; y < 10; y++) {
        for (x = 0; x < 10; x++) {
            moreNumbers[x][y] = rand();
        }
    }

    for (y = 0; y < 10; y++) {
        for (x = 0; x < 10; x++) {
            printf("%d ", moreNumbers[y][x]);
        }
        printf("\n");
    }

    return 0;
}
