#include <stdio.h>
int main() {

    // Simple Right Triangle
// int
int i, j, space, n;


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
<<<<<<< Updated upstream
int i, j, space, n;
=======
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream

// for(i = n - 1; i >= 1; i--){
=======
// for(i = 1; i <= n; i++){
//     for(space = 1; space <= n - i; space++){
//         printf(" ");
//     }
//     for(j = 1; j <= (2 * i - 1); j++){
//         printf("*");
//     }
//     printf("\n");
// }for(i = n - 1; i >= 1; i--){
>>>>>>> Stashed changes
//     for(space = 1; space <= n - i; space++){
//         printf(" ");
//     }
//     for(j = 1; j <= (2 * i - 1); j++){
//         printf("*");
//     }
//     printf("\n");
// }


<<<<<<< Updated upstream
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
=======
printf("Enter number of rows: ");
scanf("%d", &n);
for(i = 1; i <= n; i++){
    for(space = n; space > i; space--){
        printf(" ");
    }
    for(j = 1; j < 2 * i; j++){
        if(j%2==0)
        printf("0");
        else
        printf("1");
    }
    printf("\n");
}


// printf("Enter number of rows: ");
// scanf("%d", &n);

// for(i = 1; i <= n; i++){
//     for(space = n; space > i; space--){
//         printf(" ");
//     }
//     for(j = 1; j <= i; j++){
//        printf("%d", j);
//     }
//     for(j = i - 1; j >= 1; j--){
//        printf("%d", j);
//     }
//     printf("\n");
// }

>>>>>>> Stashed changes
return 0;

}