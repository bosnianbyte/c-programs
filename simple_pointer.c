/* A program that uses a pointer */

#include <stdio.h>

int main (void)
{
    int number = 10;

    printf("The memory address of our number is %p\n", &number);
    printf("The value of our number is %d\n", number);
    return 0;
}
