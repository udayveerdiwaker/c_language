#include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <time.h>
// #include <ctype.h>
// #include <stdbool.h>
// #include <math.h>
// #include <limits.h>
// #include <float.h>
// #include <errno.h>

int main(){
    // ATM Simulation

// int balance = 10000;
// int pin, choice, amount;
// printf("Enter your PIN: ");
// scanf("%d", &pin);
// if(pin == 9744) {
//     printf("\n===== ATM Menu =====\n");
//     printf("1. Check Balance\n");
//     printf("2. Deposit Money\n");
//     printf("3. Withdraw Money\n");
//     printf("4. Exit\n");
//     printf("Choose an option: ");
//     scanf("%d", &choice);
    
//     switch(choice) {
//         case 1:
//             printf("Your balance is: $%d\n", balance);
//             break;
//         case 2:
//             printf("Enter amount to deposit: ");
//             scanf("%d", &amount);
//             if(amount > 0) {
//                 balance += amount;
//                 printf("Deposited: $%d\n", amount);
//                 printf("New balance: $%d\n", balance);
//             } else {
//                 printf("Invalid amount!\n");
//             }
//             break;
//         case 3:
//             printf("Enter amount to withdraw: ");
//             scanf("%d", &amount);
//             if(amount > 0 && amount <= balance) {
//                 balance -= amount;
//                 printf("Withdrew: $%d\n", amount);
//                 printf("New balance: $%d\n", balance);
//             } else {
//                 printf("Invalid amount or Insufficient funds!\n");
//             }
//             break;
//         case 4:
//             printf("Thank you for using the ATM. Goodbye!\n");
//             break;
//         default:
//             printf("Invalid choice!\n");
//     }
// } else {
//     printf("Incorrect PIN!\n");
// }


int balance = 10000;
int pin, choice, amount;
do
{
    printf("Enter your PIN: ");
    scanf("%d", &pin);      
    if(pin == 9744) {
    printf("\n===== ATM Menu =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Choose an option: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Your balance is: $%d\n", balance);
            break;
        case 2:
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);
            if(amount > 0) {
                balance += amount;
                printf("Deposited: $%d\n", amount);
                printf("New balance: $%d\n", balance);
            } else {
                printf("Invalid amount!\n");
            }
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            if(amount > 0 && amount <= balance) {
                balance -= amount;
                printf("Withdrew: $%d\n", amount);
                printf("New balance: $%d\n", balance);
            } else {
                printf("Invalid amount or Insufficient funds!\n");
            }
            break;
        case 4:
            printf("Thank you for using the ATM. Goodbye!\n");
            break;
        default:
            printf("Invalid option!\n");
    }
} else {
      printf("Incorrect PIN. Please try again: ");
}
} while(pin != 9744);
return 0;
}