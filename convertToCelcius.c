/*
Name:Mathias kioko 
Reg :CT100/G/26229/25
*/
#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = convertToCelsius(fahrenheit);
    printf("Temperature in Celsius: %.2f°C\n", celsius);

    return 0;
}