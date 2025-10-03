#include <stdio.h>
int main() {

    // Simple Right Triangle
// int i, j, n;
// printf("Enter number of rows: ");
// scanf("%d", &n);
// for(i = 1; i <= n; i++){

//     for(j = 1; j<=i; j++){
//     printf("* ");
//     }
//     printf("\n");
// }

// Inverted Right Triangle
// printf("Enter number of rows: ");
// scanf("%d", &n);
// for(i = n; i >= 1; i--){
//     for(j = 1; j<=i; j++){
//     printf("* ");
//     }
//     printf("\n");
// }

// Pyramid Pattern
int i, j, space, n;
// printf("Enter number of rows: ");
// scanf("%d", &n);
// for(i = 1; i <= n; i++){
//     for(space = 1; space <= n-i; space++){
//         printf(" ");
//     }
//     for(j = 1; j <= (2 * i - 1); j++){
//         printf("*");
//     }
//     printf("\n");
// }

// Diamond Pattern
// printf("Enter number of rows: ");
// scanf("%d", &n);
// for(i = n; i >= 1; i--){
//     for(space = 1; space <= n - i; space++){
//         printf(" ");
//     }
//     for(j = 1; j <= (2 * i - 1); j++){
//         printf("*");
//     }
//     printf("\n");

// }

// Diamond Pattern
// printf("Enter number of rows: ");
// scanf("%d", &n);

// for(i = n - 1; i >= 1; i--){
//     for(space = 1; space <= n - i; space++){
//         printf(" ");
//     }
//     for(j = 1; j <= (2 * i - 1); j++){
//         printf("*");
//     }
//     printf("\n");
// }


// Hollow Square Pattern
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
return 0;

}