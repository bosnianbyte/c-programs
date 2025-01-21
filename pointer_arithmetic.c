/* A program that uses pointer arithmetic*/

#include <stdio.h>

#define LENGTH 10

int main (void)
{
    int array[LENGTH] = {1,2,3,4,5,6,7,8,9,10};
    int *p, *q;
    p = &array[2]; // Assigns pointer p to the 3rd element within our array
    printf("%d\n", *p);

    q = p + 3; // Assigns pointer q to the 6th element within our array
    printf("%d\n", *q);

    p += 6; // Changes p to point to the 9th element.
    printf("%d\n", *p);

    q = p - 4; // Changes q to point to the 5th element.
    printf("%d\n", *q);

    p -= 5; // Changes p to point to the 4th element.
    printf("%d\n", *p);

    array[4] = 100;
    array[3] = 50;
    
    int i;
    i = *p + *q; // Adds the 4th element and the 5th element within our array
    printf("%d\n", i);
    i = *q - *p; // Subtracts the 4th element from the 5th element
    printf("%d\n", i);

    printf("\n");
    return 0;
}
