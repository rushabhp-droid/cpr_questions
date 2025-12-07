#include <stdio.h>

int main(void) {
    int age; // Variable to store age of the user.

    // prompt for user's age
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You can vote.\n");
        return 0;
    }

    printf("You cannot vote\n");

    return 0;
}