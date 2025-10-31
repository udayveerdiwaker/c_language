#include <stdio.h>

int main() {
    int num, rem, rev = 0, copy;

    printf("Enter a number: ");
    scanf("%d", &num);

    copy = num;  // Store original number

    // Reverse the number
    while (copy != 0) {
        rem = copy % 10;           // Get last digit
        rev = rev * 10 + rem;      // Add it to reversed number
        copy /= 10;                // Remove last digit
    }

    // Check if palindrome
    if (num == rev) {
        printf("%d is a Palindrome number.\n", num);
    } else {
        printf("%d is not a Palindrome number.\n", num);
    }
         
    return 0;
}