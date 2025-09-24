#include <stdio.h>
#include <string.h>

int main() {
    char username[50], password[50];

    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);
 
    if (strcmp(username, "HamzaFarhan") == 0) {
        
        if (strcmp(password, "Fast1234") == 0) {
            printf("Login successful!\n");
        } else {
            printf("Incorrect password\n");
        }
    } else {
        printf("Username not found\n");
    }

    return 0;
}
