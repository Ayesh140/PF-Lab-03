#include<stdio.h>
#include<string.h>
int main() {
    char Inputusername[20];
    char Inputpassword[20];
    
    const char Username[] = "admin";
    const char Password[] = "1234";

    printf("Enter username: ");
    scanf("%s", Inputusername);
    printf("Enter password: ");
    scanf("%s", Inputpassword);

    if (strcmp(Inputusername, Username) == 0 && strcmp(Inputpassword, Password) == 0) {
        printf("Login Successful\n");
    } 
    else {
        printf("Invalid Credentials\n");
    }

    return 0;
}