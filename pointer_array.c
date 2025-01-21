/* A program that uses pointer arithmetic*/

#include <stdio.h>

#define LENGTH 10

int main (void)
{
    int array[LENGTH] = {11, 12, 512, 51, 234, 2, 12, 5, 59, 10};
    int sum, *p;
    
    sum = 0;
    for (p = &array[0]; p < &array[LENGTH]; p++)
        sum += *p;

    printf("%d\n\n", sum);

    return 0;
}
