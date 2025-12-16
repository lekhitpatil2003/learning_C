#include<stdio.h>
#include<stdlib.h>

int main() {

    int pin = 1234;          // Default PIN
    int userPin;             // User enters PIN
    int balance = 5000;      // Initial balance
    int choice, amount;
    int newPin, confirmPin;
    int attempts = 0;

    // LOGIN SYSTEM
    while(1) {
        printf("\n==============================");
        printf("\n     BANK LOGIN SYSTEM");
        printf("\n==============================\n");
        
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &userPin);

        if(userPin == pin) {
            printf("\nLogin Successful!\n");
            break;
        } else {
            printf("\nIncorrect PIN! Try again.\n");
            attempts++;
        }

        if(attempts == 3) {
            printf("\n? Too many wrong attempts. Account Locked!\n");
            exit(0);
        }
    }

    // MAIN MENU LOOP
    while(1) {
        printf("\n====================================");
        printf("\n      BANK MANAGEMENT SYSTEM");
        printf("\n====================================");
        printf("\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Change PIN");
        printf("\n5. Exit");
        printf("\n------------------------------------");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nYour Current Balance: ?%d\n", balance);
                break;

            case 2:
                printf("\nEnter amount to Deposit: ?");
                scanf("%d", &amount);
                if(amount > 0) {
                    balance += amount;
                    printf("Amount Deposited Successfully!\n");
                } else {
                    printf("Invalid Amount!\n");
                }
                break;

            case 3:
                printf("\nEnter amount to Withdraw: ?");
                scanf("%d", &amount);
                if(amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal Successful!\n");
                } else {
                    printf("Insufficient Balance or Invalid Amount!\n");
                }
                break;

            case 4:
                printf("\nEnter New PIN: ");
                scanf("%d", &newPin);

                printf("Confirm New PIN: ");
                scanf("%d", &confirmPin);

                if(newPin == confirmPin && newPin > 999 && newPin <= 9999) {
                    pin = newPin;
                    printf("\nPIN Changed Successfully!\n");
                } else {
                    printf("\nPIN Mismatch or Invalid PIN! Try again.\n");
                }
                break;

            case 5:
                printf("\nThank you for using our banking system. Goodbye!\n");
                exit(0);

            default:
                printf("\nInvalid Choice! Please try again.\n");
        }
    }

    return 0;
}
