#include <stdio.h>

#define MAX_M 100

struct Student {
    int sub[5];
    double agg;
};

int main(void) {
    struct Student s1;

    s1.agg = 0;

    // User Input.
    for (int i = 0; i < 5; i++) {
        printf("Enter Marks: ");
        scanf("%d", &s1.sub[i]);
    }

    // Calculation
    for (int i = 0; i < 5; i++) {
        s1.agg += s1.sub[i];
    }

    // Print Final values.

    printf("Aggregate Marks: %lf / 500\n", s1.agg);
    printf("Percentage: %lf%%\n", ( s1.agg / 500 ) * 100);

    return 0;

}