/*
Name:Mathias kioko
Reg :CT100/G/26229/25
*/
#include <stdio.h>

int main() {
    int age;
    float income;

    // Prompt user
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%f", &income);

    // Check conditions
    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}