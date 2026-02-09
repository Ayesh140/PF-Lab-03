#include<stdio.h>
int main(){
    int marks=0, sum = 0;
    float percentage;

    for(int i=0; i<5; i++){
        printf("Enter marks for subject %d (0-100): ", i+1);
        scanf("%d", &marks);
        sum += marks;
    }
    percentage = (sum / 500.0) * 100;
    
    printf("Percentage: %.2f%%\n", percentage);
    
    if(percentage >= 85) {
        printf("Grade: A\n");
    } 
    else if(percentage >= 70) {
        printf("Grade: B\n");
    } 
    else if(percentage >= 50) {
        printf("Grade: C\n");
    } 
    else {
        printf("Grade: Fail\n");
    }
    
    return 0;
}