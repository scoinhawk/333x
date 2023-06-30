#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char username[MAX_LENGTH];
    char password[MAX_LENGTH];
    char email[MAX_LENGTH];
    char question[MAX_LENGTH];

    printf("Welcome to the Question Box Program!\n");

    printf("Enter your username: ");
    fgets(username, MAX_LENGTH, stdin);
    username[strcspn(username, "\n")] = '\0'; // Remove trailing newline character

    printf("Enter your password: ");
    fgets(password, MAX_LENGTH, stdin);
    password[strcspn(password, "\n")] = '\0'; // Remove trailing newline character

    // Authenticate username and password
    // (You can replace this with your own authentication logic)
    if (strcmp(username, "admin") == 0 && strcmp(password, "password") == 0) {
        printf("Authentication successful!\n");
        printf("Enter your email here: ");
        email[strcspn(email, "\n")] = '\0'; // Remove trailing newline character
        fgets(email, MAX_LENGTH, stdin);
        
        printf("Enter your question here: ");
        fgets(question, MAX_LENGTH, stdin);
        question[strcspn(question, "\n")] = '\0'; // Remove trailing newline character

        printf("QuestionBox AI will do the research and email you the answer.\n");
        printf("Thanks for using the Question Box Program. Goodbye!\n");
    } else {
        printf("Authentication failed. Access denied.\n");
    }

    return 0;
}
