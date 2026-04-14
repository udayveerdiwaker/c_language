#include <stdio.h>
// switch case
int main(){
// int choice;
// printf("press 1 for red\n");
// scanf("%d", &choice);
// switch(choice){
// case 1:
// printf("you selected red\n");
// break;
// case 2:
// printf("you selected blue\n");
// break;
// case 3:
// printf("you selected green\n");
// break;
// case 4:
// printf("you selected yellow\n");
// break;
// default:
// printf("invalid choice...press b/t 1-4\n");
// }

// days case
// char day;
// printf("Enter day (M-S): ");
// scanf(" %c", &day);
// switch(day) {
//     case 'M':
//      printf("To day's a Monday\n"); 
//      break;
//     case 'T':
//      printf("To day's a Tuesday\n");
//      break;
//     case 'W':
//      printf("To day's a Wednesday\n");
//      break;
//     case 'R':
//      printf("To day's a Thursday\n");
//      break;
//     case 'F':
//      printf("To day's a Friday\n");
//      break;
//     case 'S':
//      printf("To day's a Saturday\n");
//      break;
//     case 'U':
//      printf("To day's a Sunday\n");
//      break;
//     default:
//      printf("Invalid day! Please enter a letter between M and U.\n");
// }

// switch case calculator
int a, b, choice;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
printf("Choose operation: 1.Add 2.Subtract 3.Multiply 4.Divide 5.Module\n");

scanf("%d", &choice);
switch(choice) {
    case 1: 
    printf("Result = %d\n", a + b); 
    break;
    case 2: 
    printf("Result = %d\n", a - b); 
    break;
    case 3: printf("Result = %d\n", a * b); 
    break;
    case 4: 
        if(b != 0) {
            printf("Result = %d\n", a / b); 
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    case 5: 
        if(b != 0) {
            printf("Result = %d\n", a % b); 
        } else {
            printf("Error: Modulus by zero is not allowed.\n");
        }   
        break;
        
    default: printf("Invalid choice\n");
}
return 0;
}