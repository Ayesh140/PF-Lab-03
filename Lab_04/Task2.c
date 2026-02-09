#include<stdio.h>
int main() {
    int units;
    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        printf("Low Usage\n");
    } 
    else if (units >= 101 && units <= 300) {
        printf("Medium Usage\n");
    } 
    else {
        printf("High Usage\n");
    }
    return 0;
}



