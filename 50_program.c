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

    // ASCII Value of a Character
    // char ch;

    // printf("Enter a character: ");
    // scanf(" %c", &ch);

    // printf("ASCII value of %c = %d\n", ch, ch);

//     // employe gross salary
//     float basic, ta, da, hra, gross;    
//     printf("Enter basic salary: ");
//     scanf("%f", &basic);

//     if(basic < 10000) {
//     ta = 20 * basic/100;
//     da = 30 * basic/100;
//     hra = 35 * basic/100;
//     gross = basic + ta + da + hra;   
//     printf("Gross Salary = %.2f\n", gross);

//     } else if(basic < 20000) {
//     ta = 25 * basic/100;
//     da = 35 * basic/100;
//     hra = 40 * basic/100;
//     gross = basic + ta + da + hra;
//     printf("Gross Salary = %.2f\n", gross); 
    
//     } else if(basic < 30000) {
//     ta = 30 * basic/100;    
//     da = 40 * basic/100;
//     hra = 45 * basic/100;
//     gross = basic + ta + da + hra;
//     printf("Gross Salary = %.2f\n", gross); 
//     }
//  else {
//     printf("Invalid input\n");  
//     }

int a;
printf("Enter a number: ");
scanf("%d", &a);
for(int i = 1; i <= a; i++) {
    a = a * i;
    printf("%d \n", a);
}

    return 0;
}
