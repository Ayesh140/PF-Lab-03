#include <stdio.h>
#include <math.h> 

int main() {
    int choice;
    double num1, num2, result;

    printf("SCIENTIFIC CALCULATOR\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square of a number\n");
    printf("6. Cube of a number\n");
    printf("7. Square Root of a number\n");
    printf("8. Power (x^y)\n");
    printf("9. Absolute Value\n");

    printf("Enter selection (1-9): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }
    switch(choice) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 8:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);

            if (choice == 1) {
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
            }
            else if (choice == 2) {
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
            }
            else if (choice == 3) {
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
            }
            else if (choice == 4) {
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                }
            }
            else if (choice == 8) {
                result = pow(num1, num2);
                printf("Result: %.2lf\n", result);
            }
            break;

        case 5:
        case 6:
        case 7:
        case 9:
            printf("Enter a number: ");
            scanf("%lf", &num1);

            if (choice == 5) {
                result = num1 * num1;
                printf("Result: %.2lf\n", result);
            }
            else if (choice == 6) {
                result = num1 * num1 * num1;
                printf("Result: %.2lf\n", result);
            }
            else if (choice == 7) {
                if (num1 < 0) {
                    printf("Error: Cannot calculate square root of a negative number.\n");
                } else {
                    result = sqrt(num1);
                    printf("Result: %.2lf\n", result);
                }
            }
            else if (choice == 9) {
                result = fabs(num1);
                printf("Result: %.2lf\n", result);
            }
            break;

        default:
            printf("Invalid menu choice. Please run the program again and select 1-9.\n");
    }

    return 0;
}