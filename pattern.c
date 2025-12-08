#include <stdio.h>

int main(void) {
    char ch = 'a';
    int n = 0;

    printf("enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", ch + j);
        }
        printf("\n");
    }

    return 0;
}