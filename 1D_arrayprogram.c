/*
Name:Mathias kioko 
Reg :CT100/G/26229/25
*/
#include <stdio.h>

int main() {
    double revenue[7], total = 0, average;
    int i;

    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%lf", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7.0;

    printf("\nTotal weekly revenue = %.2f\n", total);
    printf("Average daily revenue = %.2f\n", average);

    return 0;
}