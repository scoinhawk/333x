#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    int size = 0;
    int input;

    printf("Welcome to the Array Input Program!\n");

    while (1) {
        printf("Enter an integer (-1 to stop): ");
        scanf("%d", &input);

        if (input == -1) {
            break;
        }

        if (size < MAX_SIZE) {
            array[size] = input;
            size++;
        } else {
            printf("Array is full. Cannot accept more input.\n");
            break;
        }
    }

    printf("Array contents: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
