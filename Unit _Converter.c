#include <stdio.h>

int main() {
    int choice;
    float km, m, cm;

    printf("1. Kilometer to Meter\n");
    printf("2. Meter to Centimeter\n");
    printf("3. Centimeter to Meter\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter kilometers: ");
            scanf("%f", &km);
            m = km * 1000;
            printf("Meters = %.2f\n", m);
            break;
        case 2:
            printf("Enter meters: ");
            scanf("%f", &m);
            cm = m * 100;
            printf("Centimeters = %.2f\n", cm);
            break;
        case 3:
            printf("Enter centimeters: ");
            scanf("%f", &cm);
            m = cm / 100;
            printf("Meters = %.2f\n", m);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
