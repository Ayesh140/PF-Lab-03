#include<stdio.h>
int main() {
    float cgpa;
    int familyIncome;
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);
    printf("Enter Family Income: ");
    scanf("%d", &familyIncome);

    if (cgpa >= 3.5) {
        if (familyIncome < 50000) {
            printf("You are eligible for a 100%% Scholarship.\n");
        } 
        else {
            printf("You are eligible for a 50%% Scholarship.\n");
        }
    } 
    else {
        if (cgpa >= 3.0 && familyIncome < 40000) {
            printf("You are eligible for a 25%% Scholarship.\n");
        } 
        else {
            printf("You are not eligible for any Scholarship.\n");
        }
    }
    return 0;
}
