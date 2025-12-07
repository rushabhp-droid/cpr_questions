#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Prompt User for input
    double temp_f, temp_c; // variable to store value in fahrenheit.
    printf("Enter temp: (in F): ");
    scanf("%lf", &temp_f);

    // Calculate temp in celcius.
    temp_c = ((temp_f - 32) * 5) / 9;

    // Display the temp in celcius.

    printf("Temp (in C): %lf\n", temp_c);

    return 0;
}
