#include <stdio.h>

struct Student {
    int id;
    char grade;
};

int main() {

    printf("===== 1. Arithmetic Operators =====\n");
    int a = 10, b = 3;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);

    printf("===== 2. Relational Operators =====\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n\n", a <= b);

    printf("===== 3. Logical Operators =====\n");
    int x = 1, y = 0;
    printf("x && y = %d\n", x && y);
    printf("x || y = %d\n", x || y);
    printf("!x     = %d\n", !x);
    printf("!y     = %d\n\n", !y);

    printf("===== 4. Bitwise Operators =====\n");
    printf("a & b  = %d\n", a & b);
    printf("a | b  = %d\n", a | b);
    printf("a ^ b  = %d\n", a ^ b);
    printf("~a     = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n\n", a >> 1);

    printf("===== 5. Assignment Operators =====\n");
    int c = 10;
    printf("c = %d\n", c);
    c += 5;  printf("c += 5 -> %d\n", c);
    c -= 3;  printf("c -= 3 -> %d\n", c);
    c *= 2;  printf("c *= 2 -> %d\n", c);
    c /= 4;  printf("c /= 4 -> %d\n", c);
    c %= 3;  printf("c %%= 3 -> %d\n\n", c);

    printf("===== 6. Increment / Decrement =====\n");
    int z = 5;
    printf("z = %d\n", z);
    printf("z++ = %d\n", z++);
    printf("After z++ : %d\n", z);
    printf("++z = %d\n", ++z);
    printf("z-- = %d\n", z--);
    printf("After z-- : %d\n", z);
    printf("--z = %d\n\n", --z);

    printf("===== 7. Conditional (Ternary) =====\n");
    int max = (a > b) ? a : b;
    printf("Greater number between %d and %d is: %d\n\n", a, b, max);

    printf("===== 8. Special Operators =====\n");
    int p;
    printf("Size of int: %lu\n", sizeof(p));

    int num = 42;
    int *ptr = &num;
    printf("Address of num: %p\n", (void*)&num);
    printf("Value using pointer: %d\n", *ptr);

    int result = (1, 2, 3); // comma operator -> last value
    printf("Result of comma operator: %d\n", result);

    struct Student s1 = {101, 'A'};
    struct Student *sptr = &s1;
    printf("Access with .  : %d, %c\n", s1.id, s1.grade);
    printf("Access with -> : %d, %c\n", sptr->id, sptr->grade);

    return 0;
}
