/* A program that uses a pointer */

#include <stdio.h>

int main (void)
{
    int number = 10;
    int *pNumber = &number;

    printf("The memory address of our number is %p\n", &number);
    printf("The value of pNumber is %p\n", pNumber);

    printf("The value of our number is %d\n", number);
    printf("The value at the stored address is %d\n", *pNumber);

    return 0;
}
