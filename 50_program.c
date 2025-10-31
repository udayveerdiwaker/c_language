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
    // int integer;

    // printf("Enter a character: ");
    // scanf("%c", &ch);

    // printf("ASCII value of %c = %d\n", ch, ch);

    // // Size of Data Types
    // printf("Size of int: %zu bytes\n", sizeof(int));
    // printf("Size of float: %zu bytes\n", sizeof(float));
    // printf("Size of char: %zu bytes\n", sizeof(char));
    // printf("Size of double: %zu bytes\n", sizeof(double));


    
    // ASCII Values of All Characters
    // for(char ch = 'A'; ch <= 'Z'; ch++) {
    //   printf("%c = %d\n", ch, ch);
    // }
    // for(char ch = 'a'; ch <= 'z'; ch++) {
    //     printf("%c = %d\n", ch, ch);
    // }

  
    
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
    // int num;
    // printf("Enter an integer: ");
    // scanf("%d", &num);
    // if(num % 2 == 0) {
    //     printf("%d is even\n", num);
    // } else {
    //     printf("%d is odd\n", num);
    // }



    // Largest of Two Numbers
    // int a, b;
    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b);
    // if(a > b) {
    //     printf("%d is larger\n", a);
    // } else {
    //     printf("%d is larger\n", b);
    // }    


    // Largest of Three Numbers
    // int a, b, c;

    // printf("Enter three numbers: ");
    // scanf("%d %d %d", &a, &b, &c);

    // if (a >= b && a >= c)
    //     printf("%d is largest\n", a);
    // else if (b >= a && b >= c)
    //     printf("%d is largest\n", b);
    // else
    //     printf("%d is largest\n", c);


    //     // Check Positive, Negative or Zero
    // int num;

    // printf("Enter an integer: ");
    // scanf("%d", &num);
    
    // if(num > 0){
    //     printf("%d is positive\n", num);
    // }else if(num < 0){
    //         printf("%d is negative\n", num);
    //         }
    //     else{
    //     printf("You entered zero\n");
    // }
  
    // Leap Year Checker
    // int year;

    // printf("Enter a year: ");
    // scanf("%d", &year);
    //  if (year % 400 == 0) {
    //     printf("%d is a leap year (divisible by 400)\n", year);
    // } else {
    //     printf("%d is not divisible by 400\n", year);
    // }
    // Sum of Natural Numbers (1 to n)
    // int n, sum = 0;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++){
    //     sum = sum += i;
    //     printf("%d\n", sum);
    // }
    // printf("Sum of natural numbers from 1 to %d is %d\n", n, sum);



// Sum=n×(n+1)/2​


// Example:
// If n = 5 → sum = 5 × 6 / 2 = 15.


// Print Numbers from 0 to n
// int n;

// printf("Enter a number: ");
// scanf("%d", &n);
// for (int i = 0; i <= n; i++){
//     printf("%d\n", i);
// }

// Print Even Numbers from 0 to n
// int n;
// printf("Enter a number: ");
// scanf("%d", &n);
// for (int i = 0; i <= n; i += 2){
//     printf("%d\n", i);
// }

// Countdown from n to 1
// int n;
// printf("Enter a number: ");
// scanf("%d", &n);

// for(int i = n; i >= 1; i--){
//     printf("%d\n", i);
// }


// nested loops
// int rows, cols;
// printf("Enter number of rows and columns: ");
// scanf("%d %d", &rows, &cols);

// for(int i = 1; i <= rows; i++){
//     for(int j = 1; j <= cols; j++){
//         printf("* ");
//     }
//     printf("\n");
// }

// Outer loop
// int I, J;
// printf("Nested Loop Example:\n");
// scanf("%d %d", &I, &J);

// for (int i = 50; i >= I; --i) {
//   printf("Outer: %d\n", i);  // Executes 2 times

//   // Inner loop
//   for (int j = 50; j >= J; --j) {
//     printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
//   }
// }

// // star pettern
// int i,j,n;
// printf("Enter number of rows: ");
// scanf("%d", &n);

// for(i=1; i<=n; i++){

//   for(j=1;j<=i;j++){

//     printf("* ");

//   }
//   printf("\n");
// }


// 15. Factorial of a Number
 int n, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;  // multiply
    }

    printf("Factorial = %d\n", fact);

   return 0;
}
