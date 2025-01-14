// A program that asks for two numbers and prints their sum

#include <stdio.h>

int main(void)
{ 
    int first_num, second_num;

    printf("Enter first integer: ");
    scanf("%d", &first_num);
    printf("Enter second number: ");
    scanf("%d", &second_num);

    printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
    return 0;
}
