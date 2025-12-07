#include <stdio.h>

int main(void) {

    // Declare variables.

    char ch;

    // Prompt user for input

    printf("Enter a character: ");
    ch = getchar();

    // Modify ascii value.
    if (ch >= 'a' && ch <= 'z') ch = ch - ('a' - 'A');

    // print the final character. (uppercase)
    printf("%c\n", ch);

    return 0;
}