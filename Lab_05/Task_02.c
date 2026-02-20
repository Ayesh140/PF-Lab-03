#include<stdio.h>
int main() {
    int units;
    char customerType;
    float billAmount;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    printf("Enter customer type (D for Domestic, C for Commercial): ");
    scanf(" %c", &customerType);
    if (units <= 100) {
        billAmount = units * 10; 
    } 
    else if (units > 100 && units <= 300) {
        if (customerType == 'D' || customerType == 'd') {
            billAmount = units * 12;
        } 
        else if (customerType == 'C' || customerType == 'c') {
            billAmount = units * 15;
        } 
        else {
            printf("Invalid customer type.\n");
            return 1; 
        }
    } 
    else { 
        billAmount = units * 20;  }
    printf("Total electricity bill: Rs. %.2f\n", billAmount);
    return 0; 
}
