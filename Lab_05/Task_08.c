#include <stdio.h>
#include <math.h>


int main() {
    int choice;
    double num1, num2, result;


    while(1) {
        printf("\n--- Scientific Calculator ---\n");
        printf("1. Addition\t\t2. Subtraction\n");
        printf("3. Multiplication\t4. Division\n");
        printf("5. Square Root\t\t6. Power (x^y)\n");
        printf("7. Logarithm (log10)\t8. Absolute Value\n");
        printf("9. Sine (sin)\t\t10. Cosine (cos)\n");
        printf("11. Tangent (tan)\t0. Exit\n");
       
        printf("\nEnter operation choice: ");
        scanf("%d", &choice);


        if (choice == 0) {
            printf("Exiting program...\n");
            break;
        }


        switch(choice) {
            case 1: // Addition
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", num1 + num2);
                break;


            case 2: // Subtraction
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", num1 - num2);
                break;


            case 3: // Multiplication
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", num1 * num2);
                break;


            case 4: // Division
                printf("Enter numerator and denominator: ");
                scanf("%lf %lf", &num1, &num2);
                // Nested Validation
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    printf("Result: %.2lf\n", num1 / num2);
                }
                break;


            case 5: // Square Root
                printf("Enter a number: ");
                scanf("%lf", &num1);
                // Nested Validation
                if (num1 < 0) {
                    printf("Error: Square root of a negative number is not allowed.\n");
                } else {
                    printf("Result: %.2lf\n", sqrt(num1));
                }
                break;


            case 6: // Power
                printf("Enter base and exponent (x y): ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", pow(num1, num2));
                break;


            case 7: // Logarithm
                printf("Enter a number: ");
                scanf("%lf", &num1);
                // Nested Validation
                if (num1 <= 0) {
                    printf("Error: Logarithm of zero or negative is not allowed.\n");
                } else {
                    printf("Result: %.4lf\n", log10(num1));
                }
                break;


            case 8: // Absolute Value
                printf("Enter a number: ");
                scanf("%lf", &num1);
                printf("Result: %.2lf\n", fabs(num1));
                break;


            case 9: // Sine
                printf("Enter angle in radians: ");
                scanf("%lf", &num1);
                printf("Result: %.4lf\n", sin(num1));
                break;


            case 10: // Cosine
                printf("Enter angle in radians: ");
                scanf("%lf", &num1);
                printf("Result: %.4lf\n", cos(num1));
                break;


            case 11: // Tangent
                printf("Enter angle in radians: ");
                scanf("%lf", &num1);
                printf("Result: %.4lf\n", tan(num1));
                break;


            default:
                printf("Invalid selection! Please choose between 0 and 11.\n");
        }
    }
   
    return 0;
}