/* A program that showcases strings */

#include <stdio.h>

int main (void)
{
    // Declares and initializes a character array with 19 + 1 elements. The 1 additional is for the null character
    char str[] = "Hello, how are you?";

    // Prints the array until it reaches the \0 character
    printf("%s\n", str);
    // Prints the first 5 elements of our character array
    printf("%.5s\n", str);
    
    // Prints our string with an automatic new line character at the end without needing to indicate it
    puts(str);

    // & operator isn't needed because array names can be used as pointers for functions
    scanf("%s", str); // Skips white space and stores all characters until it reaches another white space
    puts(str);

    return 0;
}
