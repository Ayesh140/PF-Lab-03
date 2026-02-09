#include<stdio.h>
int main() {
    float billAmount, discount = 0, finalAmount;
    
    printf("Enter total bill amount: ");
    scanf("%f", &billAmount);
    
    if (billAmount >= 5000) {
        discount = 0.20 * billAmount;
    } 
    else if (billAmount >= 3000 && billAmount < 5000) {
        discount = 0.10 * billAmount;
    }
    else{
        discount = 0;
        printf("No discount applicable.\n");
    }
    
    finalAmount = billAmount - discount;
    
    printf("Total Bill Amount: $%.2f\n", billAmount);
    printf("Discount: $%.2f\n", discount);
    printf("Final Amount to Pay: $%.2f\n", finalAmount);
}