#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 100

struct Account {
    char accountNumber[11];
    char accountHolder[50];
    float balance;
};

struct Account accounts[MAX_ACCOUNTS];
int accountCount = 0;

void addAccount() {
    if (accountCount >= MAX_ACCOUNTS) {
        printf("Error: Maximum number of accounts reached.\n");
        return;
    }

    char accountNumber[11];
    char accountHolder[50];
    float initialBalance;

    printf("Enter account number: ");
    scanf("%s", accountNumber);

    // Check if account number already exists
    for (int i = 0; i < accountCount; i++) {
        if (strcmp(accountNumber, accounts[i].accountNumber) == 0) {
            printf("Error: Account number already exists.\n");
            return;
        }
    }

    printf("Enter account holder name: ");
    scanf("%s", accountHolder);
    printf("Enter initial balance: ");
    scanf("%f", &initialBalance);

    // Add new account
    strcpy(accounts[accountCount].accountNumber, accountNumber);
    strcpy(accounts[accountCount].accountHolder, accountHolder);
    accounts[accountCount].balance = initialBalance;
    accountCount++;

    printf("Account added successfully.\n");
}

void searchAccount() {
    char accountNumber[11];
    printf("Enter account number: ");
    scanf("%s", accountNumber);

    for (int i = 0; i < accountCount; i++) {
        if (strcmp(accountNumber, accounts[i].accountNumber) == 0) {
            printf("Account holder: %s\n", accounts[i].accountHolder);
            printf("Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }

    printf("Error: Account not found.\n");
}

void updateAccount() {
    char accountNumber[11];
    printf("Enter account number: ");
    scanf("%s", accountNumber);

    for (int i = 0; i < accountCount; i++) {
        if (strcmp(accountNumber, accounts[i].accountNumber) == 0) {
            int choice;
            float amount;
            printf("1. Credit\n");
            printf("2. Debit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Enter amount to be credited: ");
                scanf("%f", &amount);
                accounts[i].balance += amount;
            } else if (choice == 2) {
                printf("Enter amount to be debited: ");
                scanf("%f", &amount);
                accounts[i].balance -= amount;
            } else {
                printf("Invalid choice.\n");
return;}

        printf("Transaction successful.\n");
        printf("Updated balance: %.2f\n", accounts[i].balance);
        return;
    }
}

printf("Error: Account not found.\n");

}

void saveAccountsToFile(){
FILE *fp;
fp = fopen("accounts.txt", "w");
for (int i = 0; i < accountCount; i++) {
fprintf(fp, "Account Number: %s\n", accounts[i].accountNumber);
fprintf(fp, "Account Holder: %s\n", accounts[i].accountHolder);
fprintf(fp, "Balance: %.2f\n", accounts[i].balance);
}
fclose(fp);
printf("Accounts saved successfully to accounts.txt file\n");
}

int main() {
int choice;
while (1) {
printf("1. Add account\n");
printf("2. Search account\n");
printf("3. Update account\n");
printf("4. Save accounts\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);


    switch (choice) {
        case 1:
            addAccount();
            break;
        case 2:
            searchAccount();
            break;
        case 3:
            updateAccount();
            break;
        case 4:
            saveAccountsToFile();
            break;
        case 5:
            return 0;
        default:
            printf("Invalid choice.\n");
            break;
    }
}
return 0;

}