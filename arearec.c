#include <stdio.h>


// Rectangle (User Defined Datatype aka structure)
struct rectangle {
    double length, breadth;
};

// Function prototyping.
double c_area(double, double);
double c_perimeter(double, double);

int main(void) {

    struct rectangle rec_1;

    // Prompt user for prompt.

    printf("Enter Length: (in m): ");
    scanf("%lf", &rec_1.length);

    printf("Enter Breadth: (in m): ");
    scanf("%lf", &rec_1.breadth);

    // Print the calculated area and perimenter
    printf("Area of rectangle: (in m^2): %lf\n", c_area(rec_1.length, rec_1.breadth));
    printf("Perimeter of rectangle: (in m): %lf\n", c_perimeter(rec_1.length, rec_1.breadth));
    return 0;
}

double c_area(double length, double breadth) {
    return (length * breadth);
}

double c_perimeter(double length, double breadth) {
    return 2 * (length + breadth);
}