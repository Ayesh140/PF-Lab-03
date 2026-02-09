#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    int func, trigFunc, mode, trigInverse, logOperator, numFactorial;
    char op;
    double num1, num2, factorial, numReciprocal, num, percentage, angle, x, power, base, numSqrroot, numLog;

    while(1) { 
        printf("\nScientific Calculator\n\n");
        printf("Press '1' for Arithmetic (+, -, *, /)\n");
        printf("Press '2' for Percentage\n");
        printf("Press '3' for Trigonometric Operations\n");
        printf("Press '4' for Inverse Trigonometric Operations\n");
        printf("Press '5' for Logarithmic Operations\n");
        printf("Press '6' for Exponentiation\n");
        printf("Press '7' for Square Root\n");
        printf("Press '8' for Factorial\n");
        printf("Press '9' for Reciprocal\n");
        printf("Press '0' to Exit\n\n");
        
        printf("Enter selection: ");
        scanf("%d", &func);

        switch(func) {
            case 0:
                printf("Exiting...\n");
                return 0;

            case 1:
                // Arithmetic
                printf("Enter an Operator (+, -, *, /): ");
                scanf(" %c", &op); 
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                
                switch(op) {
                    case '+': printf("Result: %lf\n", num1 + num2); break;
                    case '-': printf("Result: %lf\n", num1 - num2); break;
                    case '*': printf("Result: %lf\n", num1 * num2); break;
                    case '/':
                        if (num2 == 0) {
                            printf("Error: Division by zero.\n");
                        } else {
                            printf("Result: %lf\n", num1 / num2);
                        }
                        break;
                    default: printf("Invalid Operator.\n");
                }
                break;

            case 2:
                // Percentage
                printf("Enter a number: ");
                scanf("%lf", &num);
                printf("Enter percentage amount: ");
                scanf("%lf", &percentage);
                printf("Result: %lf\n", num * (percentage / 100));
                break;

            case 3:
                // Trigonometry
                printf("Press '1' for sine(x)\n");
                printf("Press '2' for cosine(x)\n");
                printf("Press '3' for tan(x)\n");
                scanf("%d", &trigFunc);

                printf("Press '1' for Degree input\n");
                printf("Press '2' for Radian input\n");
                scanf("%d", &mode);

                printf("Enter angle: ");
                scanf("%lf", &angle);

                if(mode == 1) {
                    if (trigFunc == 3 && (fmod(fabs(angle), 180.0) == 90.0)) {
                        printf("Error: Tangent of 90/270 degrees is undefined.\n");
                        break;
                    }
                    x = angle * (M_PI / 180);
                } else {
                    x = angle;
                }

                switch(trigFunc) {
                    case 1: printf("Result: %lf\n", sin(x)); break;
                    case 2: printf("Result: %.2lf\n", cos(x)); break; 
                    case 3: printf("Result: %lf\n", tan(x)); break;
                    default: printf("Invalid Selection.\n");
                }
                break;

            case 4:
                // Inverse Trigonometry
                printf("Press '1' for arcsine(x)\n");
                printf("Press '2' for arccosine(x)\n");
                printf("Press '3' for arctan(x)\n");
                scanf("%d", &trigInverse);
                
                printf("Enter the value (ratio): ");
                scanf("%lf", &x);

                if ((trigInverse == 1 || trigInverse == 2) && (x < -1 || x > 1)) {
                    printf("Error: Input for asin/acos must be between -1 and 1.\n");
                } else {
                    double resultRadians;
                    switch(trigInverse) {
                        case 1: resultRadians = asin(x); break;
                        case 2: resultRadians = acos(x); break;
                        case 3: resultRadians = atan(x); break;
                        default: printf("Invalid Selection."); resultRadians = 0; break;
                    }

                    printf("Press '1' for Degree Output\n");
                    printf("Press '2' for Radian Output\n");
                    scanf("%d", &mode);

                    if (mode == 1) {
                        printf("Result: %lf degrees\n", resultRadians * (180 / M_PI));
                    } else {
                        printf("Result: %lf radians\n", resultRadians);
                    }
                }
                break;

            case 5:
                // Logarithm
                printf("Press '1' for Logarithm Function (base 10)\n");
                printf("Press '2' for Natural Logarithm Function (ln)\n");
                scanf("%d", &logOperator);
                
                printf("Enter a positive number: ");
                scanf("%lf", &numLog);

                if (numLog <= 0) {
                    printf("Error: Logarithm undefined for zero/negative.\n");
                } else {
                    switch(logOperator) {
                        case 1: printf("Result: %lf\n", log10(numLog)); break;
                        case 2: printf("Result: %lf\n", log(numLog)); break;
                        default: printf("Invalid Selection.\n");
                    }
                }
                break;

            case 6:
                // Exponentiation
                printf("Enter Base Number: ");
                scanf("%lf", &base);
                printf("Enter Power: ");
                scanf("%lf", &power);
                printf("Result: %lf\n", pow(base, power));
                break;

            case 7:
                // Square Root
                printf("Enter a Number: ");
                scanf("%lf", &numSqrroot);
                if (numSqrroot < 0)
                    printf("Error: Cannot square root negative numbers.\n");
                else
                    printf("Result: %lf\n", sqrt(numSqrroot));
                break;

            case 8:
                // Factorial
                printf("Enter a positive integer: ");
                scanf("%d", &numFactorial);

                if (numFactorial < 0) {
                    printf("Error: Factorial of negative numbers does not exist!\n");
                } else if (numFactorial > 170) {
                    printf("Error: Result too large (Infinity).\n");
                } else {
                    factorial = 1;
                    for (int i = 1; i <= numFactorial; ++i) {
                        factorial = factorial * i;
                    }
                    printf("Result: %lf\n", factorial);
                }
                break;

            case 9:
                // Reciprocal
                printf("Enter a Number: ");
                scanf("%lf", &numReciprocal);

                if (numReciprocal == 0) {
                    printf("Error: Reciprocal of zero cannot be calculated!\n");
                } else {
                    printf("Result: %lf\n", 1.0 / numReciprocal);
                }
                break;

            default:
                printf("Enter a valid Number between (0-9)\n");
        }
    }
    
    return 0;
}