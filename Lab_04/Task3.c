#include<stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number is Positive.\n");
    } 
    else if (number < 0) {
        printf("The number is Negative.\n");
    } 
    else {
        printf("The number is Zero.\n");
    }
    return 0;
}