#include <stdio.h>

unsigned int c_power(int base, int power);

int main(int argc, char const *argv[])
{
    int power, base;

    printf("Enter number: ");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &power);

    printf("%d", c_power(base, power));

    return 0;
}

unsigned int c_power(int base, int power) {
    int n = 1;
    while (power > 0) {
        n *= base;
        power--;
    }
    return n;
}
