#include <stdio.h>

int main() {

    int i, j, space, n;

    // ------------------------------
    // Simple Right Triangle
    // ------------------------------
    /*
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    */

    // ------------------------------
    // Inverted Right Triangle
    // ------------------------------
    /*
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = n; i >= 1; i--){
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    */

    // ------------------------------
    // Pyramid Pattern
    // ------------------------------
    /*
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(space = 1; space <= n - i; space++){
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++){
            printf("*");
        }
        printf("\n");
    }
    */

    // ------------------------------
    // Diamond Pattern
    // ------------------------------
    /*
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Upper part of diamond
    for(i = 1; i <= n; i++){
        for(space = 1; space <= n - i; space++){
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++){
            printf("*");
        }
        printf("\n");
    }

    // Lower part of diamond
    for(i = n - 1; i >= 1; i--){
        for(space = 1; space <= n - i; space++){
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++){
            printf("*");
        }
        printf("\n");
    }
    */

    // ------------------------------
    // Hollow Square Pattern
    // ------------------------------
    printf("Enter size of square: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(i == 1 || i == n || j == 1 || j == n){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    // ------------------------------
    // Optional: 1-0 Pyramid Pattern
    // ------------------------------
    /*
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(space = n; space > i; space--){
            printf(" ");
        }
        for(j = 1; j < 2 * i; j++){
            if(j % 2 == 0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
    */

    // ------------------------------
    // Number Pyramid Pattern
    // ------------------------------
    /*
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(space = n; space > i; space--){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("%d", j);
        }
        for(j = i - 1; j >= 1; j--){
            printf("%d", j);
        }
        printf("\n");
    }
    */

    return 0;
}
