/*
Name:Mathias kioko 
Reg :CT100/G/26229/25
*/
#include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter your starting account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;
        printf("Remaining balance: %.2f\n", balance);

        if (balance <= 0) {
            printf("Your balance is zero or negative. No more withdrawals allowed.\n");
        }
    }

    return 0;
}