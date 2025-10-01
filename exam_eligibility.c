/*
Name:Mathias kioko 
Reg :CT100/G/26229/25
*/
#include <stdio.h>

int main() {
    float attendance, avgMarks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &avgMarks);

    if (attendance >= 75 && avgMarks >= 40) {
        printf("Eligible for exam.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}
 