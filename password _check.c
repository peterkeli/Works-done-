/*
Name:Mathias kioko 
Reg :CT100/G/26229/25
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    const char correct[] = "1234";

    do {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, correct) != 0) {
            printf("Incorrect password. Try again.\n");
        }

    } while (strcmp(password, correct) != 0);

    printf("Access Granted!\n");

    return 0;
}