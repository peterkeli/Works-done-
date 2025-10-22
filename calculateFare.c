/*
Name:Mathias kioko 
Reg :CT100/G/26229/25
*/
#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    float fare = calculateFare(distance);
    printf("Total Fare: KSh. %.2f\n", fare);

    return 0;
}
