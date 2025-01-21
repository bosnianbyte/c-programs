/*  A program that uses a pointer to assign values to a multi-dimensional array 
    instead of using nested for loops without pointers. */

#include <stdio.h>

#define ROWS 10
#define COLUMNS 10

int main (void)
{
    int array[ROWS][COLUMNS];
    int *p, i = 1;

    //  Assigns p to point to the first element within the array.
    //  Increments the pointer in memory by 1, because mult-dimensional
    //  arrays are stored in row-major order
    for (p = &array[0][0]; p <= &array[ROWS - 1][COLUMNS - 1]; p++, i++) {
        *p = i;
    }

    for (p = &array[0][0]; p <= &array[ROWS - 1][COLUMNS - 1]; p++) {
        printf("%5d", *p);
        if (*p % 10 == 0) {
            printf("\n");
        }
    }


    return 0;
}
