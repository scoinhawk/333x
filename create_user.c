#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user {
    char name[50];
    char username[20];
    char email[50];
    char password[20];
    char phone_number[15];
    char zipcode[10];
};

int main() {
    struct user u;
    printf("Enter your full name: ");
    fgets(u.name, 50, stdin);
    printf("Enter your username: ");
    fgets(u.username, 20, stdin);
    printf("Enter your email: ");
    fgets(u.email, 50, stdin);
    printf("Enter your password: ");
    fgets(u.password, 20, stdin);
    printf("Enter your phone number: ");
    fgets(u.phone_number, 15, stdin);
    printf("Enter your zipcode: ");
    fgets(u.zipcode, 10, stdin);

    printf("\n\nName: %sUsername: %sEmail: %sPassword: %sPhone Number: %sZipcode: %s", u.name, u.username, u.email,
           u.password,
           u.phone_number,
           u.zipcode);

    return 0;
}
