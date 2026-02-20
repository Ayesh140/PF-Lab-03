#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        
        if (side1 == side2 && side2 == side3) {
            printf("Equilateral triangle\n");
        } 
        else {
            if (side1 == side2 || side1 == side3 || side2 == side3) {
                printf("Isosceles triangle\n");
            } 
            else {
                printf("Scalene triangle\n");
            }
        }
    } 
    else { 
        printf("Not a valid triangle\n");
    }
    return 0;
}