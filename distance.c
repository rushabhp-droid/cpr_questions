#include <stdio.h>

// Global constants
#define KM_TO_M 1000
#define M_TO_CM 100
#define CM_TO_I 2.5

int main(void) {
    int dist_km, dist_m, dist_cm;
    double dist_i;
    // Prompt user for input
    printf("Enter distance between cities(in km.):");
    scanf("%d", &dist_km);

    dist_m = KM_TO_M * dist_km;
    dist_cm = M_TO_CM * dist_m;
    dist_i = CM_TO_I * (double) dist_cm;

    printf("Distance (in m): %d\nDistance (in cm): %d\nDistance (in inch): %lf", dist_m, dist_cm, dist_i);

    return 0;
}