// A program that asks for two floating point numbers and prints their product

#include <stdio.h>

int main(void)
{ 
    float first_num, second_num;

    printf("Enter first number: ");
    scanf("%f", &first_num);
    printf("Enter second number: ");
    scanf("%f", &second_num);

    float sum = first_num * second_num;
    printf("%.2f * %.2f = %.2f\n", first_num, second_num, sum);
    return 0;
}
