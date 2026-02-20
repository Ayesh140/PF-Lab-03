#include<stdio.h>
int main() {
    int mainCategory, subCategory, quantity;
    float price, totalBill;

    printf("Welcome to the Restaurant!\n");
    printf("Please select a main category:\n");
    printf("1. Fast Food\n");
    printf("2. Desi Food\n");
    scanf("%d", &mainCategory);

    switch(mainCategory) {
        case 1: 
            printf("You selected Fast Food. Please select an item:\n");
            printf("1. Burger (Rs. 500)\n");
            printf("2. Pizza (Rs. 1200)\n");
            scanf("%d", &subCategory);
            switch(subCategory) {
                case 1: 
                    price = 500;
                    printf("You selected Burger.\n");
                    break;
                case 2: 
                    price = 1200;
                    printf("You selected Pizza.\n");
                    break;
                default:
                    printf("Invalid selection for Fast Food.\n");
                    return 0;
            }
            break;

        case 2: 
            printf("You selected Desi Food. Please select an item:\n");
            printf("1. Biryani (Rs. 350)\n");
            printf("2. Karahi (Rs. 1500)\n");
            scanf("%d", &subCategory);

            switch(subCategory) {
                case 1: 
                    price = 350;
                    printf("You selected Biryani.\n");
                    break;
                case 2: 
                    price = 1500;
                    printf("You selected Karahi.\n");
                    break;
                default:
                    printf("Invalid selection for Desi Food.\n");
                    return 0;
            }
            break;

        default:
            printf("Invalid main category selection.\n");
            return 0;
    }

    printf("Please enter the quantity:\n");
    scanf("%d", &quantity);

 
    totalBill = price * quantity;
    printf("Total bill for %d item(s): Rs. %.2f\n", quantity, totalBill);

    return 0;
}