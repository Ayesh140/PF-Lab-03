#include<stdio.h>
int main() {
    int vehicleType, parkingType, hours;
    float totalFee;

    printf("Enter Vehicle Type (1 for Car, 2 for Bike, 3 for Bus): ");
    scanf("%d", &vehicleType);
    switch(vehicleType) {
        case 1: 
            printf("Enter Parking Type (1 for Regular, 2 for VIP): ");
            scanf("%d", &parkingType);
            printf("Enter Hours Parked: ");
            scanf("%d", &hours);
            switch(parkingType) {
                case 1: 
                    totalFee = hours * 50;
                    break;
                case 2:
                    totalFee = hours * 100;
                    break;
                default:
                    printf("Invalid Parking Type for Car.\n");
                    return 0;
            }
            break;

        case 2: 
            printf("Enter Parking Type (1 for Regular, 2 for Premium): ");
            scanf("%d", &parkingType);
            printf("Enter Hours Parked: ");
            scanf("%d", &hours);
            switch(parkingType) {
                case 1: 
                    totalFee = hours * 20;
                    break;
                case 2: 
                    totalFee = hours * 40;
                    break;
                default:
                    printf("Invalid Parking Type for Bike.\n");
                    return 0;
            }
            break;

        case 3: 
            printf("Enter Hours Parked: ");
            scanf("%d", &hours);
            totalFee = hours * 200; 
            break;

        default:
            printf("Invalid Vehicle Type.\n");
            return 0;
    }

    printf("Total Parking Fee: Rs. %.2f\n", totalFee);
    return 0;
}
