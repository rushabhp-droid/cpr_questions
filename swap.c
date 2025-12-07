#include <stdio.h>

// Function Prototyping
void swap(int *x, int *y);

int main(void) {
    int a, b; // Declare Variables
    // Prompt user for input.
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before Swapping\na=%d\nb=%d\n", a, b);
    // Swapping using call by reference.
    swap(&a, &b);
    printf("After Swapping\na=%d\nb=%d\n", a, b);
    return 0;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}