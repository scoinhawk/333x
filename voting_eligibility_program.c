/****	name:
	assignment
	date:
 ****/
#include <stdio.h>

int main() {
    int age;

    printf("Welcome to the Voting Eligibility Program!\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Congratulations! You are eligible to vote.\n");
    } else {
        printf("Sorry, you are not eligible to vote.\n");
    }

    return 0;
}
