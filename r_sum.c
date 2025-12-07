/*
* Program: to display the sum of the n numbers.
*/

#include <stdio.h>

int sum(unsigned int n);

int main(void) {

    unsigned int n = 0;

    // Prompt user for input.
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d", sum(n));

    return 0;
}

int sum(unsigned int n) {
    return n + (n - 1);
}