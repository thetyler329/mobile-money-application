#include <stdio.h>
#include <time.h>

int main() {
   
    double initialBalance = 50000.0; 
    double deductAmount = 0.0;
    double finalBalance;
    time_t currentTime;
    char transactionStatus[20];

    
    time(&currentTime);

   
    if (initialBalance >= deductAmount) {
        finalBalance = initialBalance - deductAmount;
        sprintf(transactionStatus, "SUCCESS");
    } else {
        finalBalance = initialBalance;
        sprintf(transactionStatus, "FAILED");
    }

    
    printf("\n=== MOBILE MONEY TRANSACTION ===\n");
    printf("Date & Time: %s", ctime(&currentTime));
    printf("Initial Balance: %.2f\n", initialBalance);
    printf("Amount Deducted: %.2f\n", deductAmount);
    printf("Final Balance: %.2f\n", finalBalance);
    printf("Transaction Status: %s\n", transactionStatus);
    printf("============================\n");

    return 0;
}