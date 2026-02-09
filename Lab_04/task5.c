#include<stdio.h>
int main() {
    int choice;
    
    printf("Welcome to the ATM Machine\n");
    printf("Please select a service:\n");
    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Deposit\n");
    printf("4. Exit\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Your current balance is $10000.\n");
            break;
        case 2:
            printf("Please enter the amount to withdraw: ");
            break;
        case 3:
            printf("Please enter the amount to deposit: ");
            break;
        case 4:
            printf("Thank you for using the ATM. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
    
    return 0;
}