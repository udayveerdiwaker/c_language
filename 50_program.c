#include <stdio.h>

int main() {

    // Swap Two Numbers (with temp)
    // int a, b, temp;

    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b);

    // temp = a;  
    // a = b;     
    // b = temp;  

    // printf("After swap: a = %d, b = %d\n", a, b);

// ASCII Value of a Character
    // char ch;

    // printf("Enter a character: ");
    // scanf("%c", &ch);

    // printf("ASCII value of %c = %d\n", ch, ch);

    // Size of Data Types
    // printf("Size of int: %zu bytes\n", sizeof(int));
    // printf("Size of float: %zu bytes\n", sizeof(float));
    // printf("Size of char: %zu bytes\n", sizeof(char));
    // printf("Size of double: %zu bytes\n", sizeof(double));

    // simple calculator
    // int a, b, choice;

    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b);

    // printf("Choose operation: 1.Add 2.Subtract 3.Multiply 4.Divide\n");
    // scanf("%d", &choice);

    // switch(choice) {
    //     case 1: printf("Result = %d\n", a + b); break;
    //     case 2: printf("Result = %d\n", a - b); break;
    //     case 3: printf("Result = %d\n", a * b); break;
    //     case 4: printf("Result = %d\n", a / b); break;
    //     default: printf("Invalid choice\n");
    // }

    // Even or Odd
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    return 0;
}
