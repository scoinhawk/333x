#include <stdio.h>

int main() {
    char choice;
    int num1, num2, result;
    int quit = 0;

    printf("Welcome to the Calculator Program!\n");

    while (!quit) {
        printf("\nPlease choose an operation:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("Enter 'n' to quit.\n");

        printf("Enter your choice (1-3 or 'n'): ");
        scanf(" %c", &choice);

        if (choice == 'n') {
            printf("Exiting the program...\n");
            quit = 1;
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        if (choice == '1') {
            result = num1 + num2;
            printf("Result: %d\n", result);
        } else if (choice == '2') {
            result = num1 - num2;
            printf("Result: %d\n", result);
        } else if (choice == '3') {
            result = num1 * num2;
            printf("Result: %d\n", result);
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
