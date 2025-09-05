#include <stdio.h>
// #include <stdlib.h>
int main()
{
    // int age = 20;
    // char name[] = "shiva";
    // float height = 5.9;
    // printf("my name is %s and my age is %d and my height is %.1f\n", name ,age, height);
    // printf("My name is: %s\n", name);
    // printf("My age is: %d\n", age);
    // printf("My height is: %.1f\n", height);
    // printf("my name is: %s\n", "shiva");
    // printf("my age is: %d\n", 20);
    // printf("my height is: %.1f\n", 5.9);

    // // change value

    // int num = 15;
    // int othernum = 20;
    // num = othernum;
    // printf("%d\n", num);

    // int x = 10;
    // int y = 5;
    // int z = x + y;
    // printf("%d\n", z);

    // // multiple variable declaration
    // int a = 5, b = 6, c = 89;
    // printf("%d\n", a + b + c);

    // int a, b, c;
    // a = b = c = 75;
    // printf("%d\n", a + b + c);

    // student data
    char student_name[50] = "maani";
    int student_id = 101;
    int student_age = 20;
    float studentfee = 75000.0;
    char student_grade = 'A';

    printf("Student Name: %s\n", student_name);
    printf("Student ID: %d\n", student_id);
    printf("Student Age: %d\n", student_age);
    printf("Student Fee: %.1f\n", studentfee);
    printf("Student Grade: %c\n", student_grade);

    char name[50];   // Variable to store name (up to 49 characters + null)

    printf("Enter your name: ");
    scanf("%s", name);   // Take input (single word name)

    printf("Welcome, %s! Glad to see you learning C.\n", name);

    // Basic syntax rules
    // printf("Welcome to C Language!\n");
    // printf("This is the second line.\n");
    // printf("And here is the third line.\n");

    //  printf("Welcome to C Language!\nThis is the second line.\nHere is the third line.\n");

    // Variables & Data Types
    // Variables, int, float, char, double

    //    int age = 20;              // integer variable
    // float price = 99.50;       // floating-point variable
    // double pi = 3.1415926535;  // double precision variable
    // char grade = 'A';          // character variable

    // printf("Age: %d\n", age);              // %d for int
    // printf("Price: %.10f\n", price);        // %.2f for float (2 decimals)
    // printf("Value of Pi: %.1lf\n", pi);   // %lf for double
    // printf("Grade: %c\n", grade);          // %c for char

    // Variables & Data Types
    // Format specifiers (%d, %f, %c, %s)

    // int num1, num2, sum;

    // // Input from user
    // printf("Enter first number: ");
    // scanf("%d", &num1);

    // printf("Enter second number: ");
    // scanf("%d", &num2);

    // // Addition
    // sum = num1 + num2;

    // // Output
    // printf("Sum = %d\n", sum);

    //  float length, breadth, area;

    //     // Input
    //     printf("Enter length of rectangle: ");
    //     scanf("%f", &length);

    //     printf("Enter breadth of rectangle: ");
    //     scanf("%f", &breadth);

    //     // Calculation
    //     area = length * breadth;

    //     // Output
    //     printf("Area of rectangle = %.2f\n", area);

    // Constants, scanf input

    //   int age;
    //     float height;
    //     char grade;

    //     printf("Enter your age: ");
    //     scanf("%d", &age);

    //     printf("Enter your height (in meters): ");
    //     scanf("%f", &height);

    //     printf("Enter your grade (A/B/C): ");
    //     scanf(" %c", &grade);   // space before %c is important!

    //     printf("\n--- Student Info ---\n");
    //     printf("Age: %d\n", age);
    //     printf("Height: %.2f meters\n", height);
    //     printf("Grade: %c\n", grade);

    // // Format specifiers (%d, %f, %c, %s)

    //     int age = 20;
    //     float height = 5.8;
    //     char grade = 'A';
    //     char name[20] = "Uday";  // string (array of characters)
    //     double pi = 3.1415926535;

    //     printf("Name: %s\n", name);       // %s for string
    //     printf("Age: %d\n", age);         // %d for int
    //     printf("Height: %.2f\n", height); // %.2f for float (2 decimals)
    //     printf("Grade: %c\n", grade);     // %c for char
    //     printf("Value of Pi: %lf\n", pi); // %lf for double

    // Operators
    // Arithmetic operators
    // Used for mathematical calculations.
    //  int a = 15, b = 4;

    // printf("a + b = %d\n", a + b);  // Addition
    // printf("a - b = %d\n", a - b);  // Subtraction
    // printf("a * b = %d\n", a * b);  // Multiplication
    // printf("a / b = %d\n", a / b);  // Division (integer)
    // printf("a %% b = %d\n", a % b); // Modulus (remainder)

    // Relational Operators
    // Used for comparison. Result is 1 (true) or 0 (false).
    //   int x = 10, y = 20;

    //     printf("x > y : %d\n", x > y);
    //     printf("x < y : %d\n", x < y);
    //     printf("x == y : %d\n", x == y);
    //     printf("x != y : %d\n", x != y);
    //     printf("x >= y : %d\n", x >= y);
    //     printf("x <= y : %d\n", x <= y);

    // Logical Operators
    // Used with conditions.
    // int p = 5, q = 0;

    // printf("p && q = %d\n", p && q); // AND
    // printf("p || q = %d\n", p || q); // OR
    // printf("!p = %d\n", !p);         // NOT

    // Assignment Operators
    // Used to assign values.
    //   int num = 10;

    //     num += 5;   // num = num + 5
    //     printf("After += : %d\n", num);

    //     num += 3;   // num = num - 3
    //     printf("After -= : %d\n", num);

    //     num *= 2;   // num = num * 2
    //     printf("After *= : %d\n", num);

    //     num /= 4;   // num = num / 4
    //     printf("After /= : %d\n", num);

    // Increment & Decrement
    // Used to increase/decrease value by 1.

    int x = 5;

    printf("x++ = %d\n", x++); // Post-increment
    printf("After x++ : %d\n", x);

    printf("++x = %d\n", ++x); // Pre-increment

    printf("x-- = %d\n", x--); // Post-decrement
    printf("After x-- : %d\n", x);

    printf("--x = %d\n", --x); // Pre-decrement

    // Bitwise Operators
    // Used for operations on binary numbers.

    // int a = 6, b = 3; // (6 = 110, 3 = 011 in binary)

    // printf("a & b = %d\n", a & b); // AND
    // printf("a | b = %d\n", a | b); // OR
    // printf("a ^ b = %d\n", a ^ b); // XOR
    // printf("~a = %d\n", ~a);       // NOT
    // printf("a << 1 = %d\n", a << 1); // Left shift
    // printf("a >> 1 = %d\n", a >> 1); // Right shift
    // system("pause");
    return 0;
}