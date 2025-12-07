#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

enum Exit {
  success,
  failure
};

// Functions
unsigned long int factorial(int n);

int main(int argc, char *argv[]) {
  int n;
  if (argc != 2) {
    fprintf(stderr, "Invalid Command Line Arguments\n");
    return failure;
  }
  else {
    n = atoi(argv[1]);
  }

  printf("Factorial: %d\n", factorial(n));
  return success;
}

unsigned long int factorial(int n) {
  if (n == 1 || n == 0) return 1;
  else return n * factorial(n - 1);
}
