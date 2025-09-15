#include <stdio.h>

int main() {
    // int a, b, c;

    // // Input three numbers
    // printf("Enter first number (a): ");
    // scanf("%d", &a);

    // printf("Enter second number (b): ");
    // scanf("%d", &b);

    // printf("Enter third number (c): ");
    // scanf("%d", &c);

    // // Compare using if conditions
    // if (a > b && a > c) {
    //     printf("%d is the greatest number\n", a);
    // } else if (b > a && b > c) {
    //     printf("%d is the greatest number\n", b);
    // } else if (c > a && c > b) {
    //     printf("%d is the greatest number\n", c);
    // } else {
    //     printf("Two or more numbers are equal\n");
    // }

    // int a, b, c;

    // printf("Program to find smallest of three numbers\n");

    // // Input
    // printf("Enter three numbers (a b c): ");
    // scanf("%d %d %d", &a, &b, &c);

    // // Conditions
    // if (a < b && a < c) {
    //     printf("%d is the smallest number\n", a);
    // } else if (b < a && b < c) {
    //     printf("%d is the smallest number\n", b);
    // } else if (c < a && c < b) {
    //     printf("%d is the smallest number\n", c);
    // } else {
    //     printf("Two or more numbers are equal\n");
    // }

    // printf("Program finished\n");


    
// percentage calculator

    int a, b, c;
    printf("percentage calculator\n");
    printf("enter the marks of three subjects\n");
    scanf("%d %d %d", &a, &b, &c);
    float percentage = (a + b + c) * 100.0 / 300.0;
    printf("percentage = %.2f\n", percentage);
    if (percentage >= 75) {
        printf("first division with honours\n");
    } else if (percentage >= 60) {
        printf("first division\n");
    } else if (percentage >= 45) {
        printf("second division\n");
    } else if (percentage >= 33) {
        printf("third division\n");
    } else {
        printf("fail\n");
    }

    return 0;
}



