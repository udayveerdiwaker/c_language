#include <stdio.h>
int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);



    // printf("Enter temperature in Fahrenheit: ");
    // scanf("%f", &fahrenheit);

    // celsius = (fahrenheit - 32) * 5 / 9;

    // printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
    return 0;
}

