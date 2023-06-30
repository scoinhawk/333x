#include <stdio.h>

int main() {
    int limit;

    printf("Welcome to The Loop Through Power of 2 Program!\n");

    printf("Enter the limit for the powers of 2: ");
    scanf("%d", &limit);

    printf("Powers of 2 up to %d:\n", limit);

    int power = 1;

    while (power <= limit) {
        printf("%d\n", power);
        power *= 2;
    }

    return 0;
}
