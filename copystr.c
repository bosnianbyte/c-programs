/* A program that uses a function to copy a string into another array */

#include <stdio.h>

/* external variables */
char str1[] = "Hello how are you?";
char str2[100];

void copystr(char a[], char b[]);

int main (void)
{
    copystr(str1, str2);

    printf("%s\n", str2);

    return 0;
}

void copystr(char a[], char b[])
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }
    b[i] = '\0';
}
