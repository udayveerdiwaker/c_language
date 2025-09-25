#include <stdio.h>
// switch case
int main(){
// int choice;
// printf("press 1 for red\n");
// scanf("%d", &choice);
// switch(choice){
// case 1: printf("you selected red\n"); break;
// case 2: printf("you selected blue\n"); break;
// case 3: printf("you selected green\n"); break;
// case 4: printf("you selected yellow\n"); break;
// default: printf("invalid choice...press b/t 1-4\n");
// }

// days case
// char day;
// printf("Enter day (M-S): ");
// scanf(" %c", &day);
// switch(day) {
//     case 'm': printf("To day's a Monday\n"); break;
//     case 't': printf("To day's a Tuesday\n"); break;
//     case 'w': printf("To day's a Wednesday\n"); break;
//     case 'r': printf("To day's a Thursday\n"); break;
//     case 'f': printf("To day's a Friday\n"); break;
//     case 's': printf("To day's a Saturday\n"); break;
//     case 'u': printf("To day's a Sunday\n"); break;
//     default: printf("Invalid day! Please enter a letter between M and U.\n");
// }

// switch case calculator
// int a, b, choice;
// printf("Enter two numbers: ");
// scanf("%d %d", &a, &b);
// printf("Choose operation: 1.Add 2.Subtract 3.Multiply 4.Divide 5.Module\n");

// scanf("%d", &choice);
// switch(choice) {
//     case 1: printf("Result = %d\n", a + b); break;
//     case 2: printf("Result = %d\n", a - b); break;
//     case 3: printf("Result = %d\n", a * b); break;
//     case 4: 
//         if(b != 0) {
//             printf("Result = %.2f\n", (float)a / b); 
//         } else {
//             printf("Error: Division by zero is not allowed.\n");
//         }
//         break;
//     case 5: 
//         if(b != 0) {
//             printf("Result = %d\n", a % b); 
//         } else {
//             printf("Error: Modulus by zero is not allowed.\n");
//         }   
//         break;
        
//     default: printf("Invalid choice\n");
// }

// int marks;
// printf("Enter your marks: ");
// scanf("%d", &marks);

// switch(marks / 50) {
//     // case 10:
//     case 9: printf("Grade: A+\n"); break;
//     case 8: printf("Grade: A\n"); break;
//     case 7: printf("Grade: B\n"); break;     
//     case 6: printf("Grade: C\n"); break;
//     case 5: printf("Grade: D\n"); break;
//     case 4: printf("Grade: E\n"); break;
//     default: printf("Grade: F (Fail)\n"); break;
// }

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
// printf("Enter your PIN: ");
// scanf("%d", &pin);
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
            printf("Invalid choice!\n");
    }
} else {
    printf("Incorrect PIN. Please try again: ");
}
} while(pin != 9744);
return 0;

}