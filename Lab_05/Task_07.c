#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20], otp[10];
    const char correctU[] = "admin";
    const char correctP[] = "1234";
    const char correctO[] = "786";

    printf("Enter Username: ");
    scanf("%s", username);
    printf("Enter Password: ");
    scanf("%s", password);
    printf("Enter OTP: ");
    scanf("%s", otp);

    if (strcmp(username, correctU) == 0) {
        if (strcmp(password, correctP) == 0) {
            if (strcmp(otp, correctO) == 0) {
                printf("Login Successful\n");
            } else {
                printf("Invalid OTP\n");
            }
        } else {
            printf("Incorrect Password\n");
        }
    } else {
        printf("Invalid Username\n");
    }

    return 0;
}