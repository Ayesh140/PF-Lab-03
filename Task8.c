#include<stdio.h>
int main() {
    int integerInput;
    float floatInput;
    char charInput;
    printf("Enter an integer: ");
    scanf("%d", &integerInput);

    printf("Enter a float: ");
    scanf("%f", &floatInput);
    
    printf("Enter a character: ");
    scanf(" %c", &charInput); 
    
    printf("You entered the integer: %d\n", integerInput);
    printf("You entered the float: %.2f\n", floatInput);
    printf("You entered the character: %c\n", charInput);
    
    return 0;
}