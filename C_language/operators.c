#include <stdio.h>

int main() {
    // Arithmetic Operators
    
    // int a = 10, b = 3;
    // printf("Arithmetic Operators:\n");
    // printf("a + b = %d\n", a + b);
    // printf("a - b = %d\n", a - b);
    // printf("a * b = %d\n", a * b);
    // printf("a / b = %d\n", a / b);
    // printf("a %% b = %d\n", a % b); // %% use karte hain printf me %



    // Relational Operators
    //   int a = 5, b = 10;
    //   printf("Relational Operators:\n");
    // printf("a == b : %d\n", a == b);
    // printf("a != b : %d\n", a != b);
    // printf("a > b  : %d\n", a > b);
    // printf("a < b  : %d\n", a < b);
    // printf("a >= b : %d\n", a >= b);
    // printf("a <= b : %d\n", a <= b);


    //    int x = 1, y = 0;
    // printf("Logical Operators:\n");
    // printf("x && y = %d\n", x && y);
    // printf("x || y = %d\n", x || y);
    // printf("!x     = %d\n", !x);
    // printf("!y     = %d\n", !y);



    //   int a = 5, b = 3; // 5 = 0101, 3 = 0011
    // printf("Bitwise Operators:\n");
    // printf("a & b = %d\n", a & b);
    // printf("a | b = %d\n", a | b);
    // printf("a ^ b = %d\n", a ^ b);
    // printf("~a    = %d\n", ~a);
    // printf("a << 1 = %d\n", a << 1);
    // printf("a >> 1 = %d\n", a >> 1);


    // int a = 10;
    // printf("Assignment Operators:\n");
    // printf("Initial a = %d\n", a);
    // a += 5;   // a = a + 5
    // printf("a += 5 -> %d\n", a);
    // a -= 3;   // a = a - 3
    // printf("a -= 3 -> %d\n", a);
    // a *= 2;   // a = a * 2
    // printf("a *= 2 -> %d\n", a);
    // a /= 4;   // a = a / 4
    // printf("a /= 4 -> %d\n", a);
    // a %= 3;   // a = a % 3
    // printf("a %%= 3 -> %d\n", a);


    //     int x = 5;
    //     printf("Increment and Decrement Operators:\n");
        
    // printf("x = %d\n", x);
    // printf("x++ = %d\n", x++); // post-increment
    // printf("After x++ : %d\n", x);
    // printf("++x = %d\n", ++x); // pre-increment
    // printf("x-- = %d\n", x--); // post-decrement
    // printf("After x-- : %d\n", x);
    // printf("--x = %d\n", --x); // pre-decrement



    //     int a = 10, b = 20;
    //     printf("Ternary Operator:\n");
    // int max = (a > b) ? a : b;
    // printf("Greater number is: %d\n", max);

    struct Student {
    int id;
    char grade;
};

    int x;
    printf("Size of int: %lu\n", sizeof(x));  // sizeof operator

    int a = 10;
    int *p = &a;  // & -> address-of, * -> dereference
    printf("Address of a: %p\n", (void*)&a);
    printf("Value using pointer: %d\n", *p);

    int result = (1, 2, 3); // comma operator -> last value
    printf("Result of comma operator: %d\n", result);

    struct Student s1 = {101, 'A'};
    struct Student *ptr = &s1;
    printf("Access with .  : %d, %c\n", s1.id, s1.grade);
    printf("Access with -> : %d, %c\n", ptr->id, ptr->grade);
    return 0;
}
